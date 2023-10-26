.data
    prompt1: .asciiz "Enter the first number: "
    prompt2: .asciiz "Enter the second number: "
    result_message: .asciiz "After swapping:\nFirst number: "
    result_message2: .asciiz "\nSecond number: "
.text
.globl main

main:

    li $v0, 4			# Prompt for the first number
    la $a0, prompt1
    syscall
   
    li $v0, 5			# Read the first number from the user
    syscall
    move $t0, $v0
    
    li $v0, 4 			# Prompt for the second number
    la $a0, prompt2
    syscall

    li $v0, 5 			# Read the second number from the user
    syscall
    move $t1, $v0

    xor $t0, $t0, $t1		# Swap the numbers using XOR without a temporary variable
    xor $t1, $t0, $t1
    xor $t0, $t0, $t1

    li $v0, 4			# Display the results
    la $a0, result_message
    syscall

    li $v0, 1			# Print the first number
    move $a0, $t0
    syscall

    li $v0, 4
    la $a0, result_message2
    syscall

    li $v0, 1			# Print the second number
    move $a0, $t1
    syscall

    li $v0, 10			# Exit the program
    syscall
