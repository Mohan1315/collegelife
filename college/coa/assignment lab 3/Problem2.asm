.data
    # Global variables to store numeric values
    num1: .word 50
    num2: .word 50
    result_message: .asciiz "The sum is: "

.text
.globl main

main:
    # Load values from global variables into registers
    lw $t0, num1
    lw $t1, num2

    # Add the values
    add $t2, $t0, $t1

    # Print the result message
    li $v0, 4
    la $a0, result_message
    syscall

    # Print the result (the sum)
    li $v0, 1
    move $a0, $t2
    syscall

    # Exit the program
    li $v0, 10
    syscall
