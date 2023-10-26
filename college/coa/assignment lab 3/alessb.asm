.data
    a: .word 5
    B: .word 10
    c: .word 0

.text
.globl main

main:
    lw $t0, a      # Load a into $t0
    lw $t1, B      # Load B into $t1

    slt $t2, $t0, $t1  # Set $t2 to 1 if $t0 < $t1, 0 otherwise
    beq $t2, $zero, not_less

    sub $t3, $t0, $t1  # c = a - B
    sw $t3, c         # Store the result in c
    j exit

not_less:
    # Handle the case when a >= B (c not calculated)

exit:
    # Exit the program
    li $v0, 10
    syscall
