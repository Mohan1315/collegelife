.data
    prompt: .asciiz "Enter a number: "
    result_message: .asciiz "The square is: "

.text
.globl main

main:
    # Print a prompt to enter a number
    li $v0, 4
    la $a0, prompt
    syscall

    # Read an integer from the user
    li $v0, 5
    syscall
    move $t0, $v0  # Store the input in $t0

    # Calculate the square of the number
    mul $t1, $t0, $t0  # $t1 = $t0 * $t0

    # Print the result message
    li $v0, 4
    la $a0, result_message
    syscall

    # Print the square (the result)
    li $v0, 1
    move $a0, $t1
    syscall

    # Exit the program
    li $v0, 10
    syscall
