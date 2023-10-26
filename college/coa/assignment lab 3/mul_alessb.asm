.data
    a: .word -2000

.text
.globl main

main:
    lw $t0, a      # Load a into $t0

    li $t1, -1234  # Load -1234 into $t1

    slt $t2, $t0, $t1  # Set $t2 to 1 if $t0 < $t1, 0 otherwise
    beq $t2, $zero, not_less

    sll $t0, $t0, 2    # a = 4 * a
    j exit

not_less:
    sra $t0, $t0, 2    # a = a / 4

exit:
    # Exit the program
    li $v0, 10
    syscall
