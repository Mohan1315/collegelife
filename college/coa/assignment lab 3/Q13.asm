.data
    # Define the variables
    a: .word 0
    B: .word 10
    c: .word 20
    d: .word 30
    e: .word 40
    result_message: .asciiz "Result: "

.text
.globl main

main:
    # Load the values of b, c, d, and e into registers
    lw $t0, B
    lw $t1, c
    lw $t2, d
    lw $t3, e

    # Perform the calculation: a = (B + c) - (d + e)
    add $t4, $t0, $t1   # $t4 = B + c
    add $t5, $t2, $t3   # $t5 = d + e
    sub $t6, $t4, $t5   # $t6 = (B + c) - (d + e)

    # Store the result in variable a
    sw $t6, a	

    # Print the result
    li $v0, 4
    la $a0, result_message
    syscall

    li $v0, 1
    lw $a0, a
    syscall

    # Exit the program
    li $v0, 10
    syscall
