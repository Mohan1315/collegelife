.data
    prompt: .asciiz "Enter an alphabet (a-z or A-Z): "
    result_message: .asciiz "\nNext alphabet: "
    result_message2: .asciiz "\nPrevious alphabet: "

.text
.globl main

main:
    # Print a prompt to enter an alphabet
    li $v0, 4
    la $a0, prompt
    syscall

    # Read a character from the user
    li $v0, 12
    syscall
    move $t0, $v0  # Store the input character in $t0

    # Ensure that the input character is within the range of a-z or A-Z
    li $t1, 65  # ASCII value for 'A'
    li $t2, 90  # ASCII value for 'Z'
    li $t3, 97  # ASCII value for 'a'
    li $t4, 122  # ASCII value for 'z'

    # Check if the input character is a lowercase letter (a-z)
    bge $t0, $t3, is_lowercase
    j is_uppercase

is_lowercase:
    # Check if the input character is 'z'
    beq $t0, $t4, print_lowercase_next
    j print_lowercase

is_uppercase:
    # Check if the input character is 'Z'
    beq $t0, $t2, print_uppercase_next

print_uppercase:
    # Print the uppercase next alphabet
    li $v0, 4
    la $a0, result_message
    syscall

    addi $t0, $t0, 1  # Increment the ASCII value for the next character
    li $v0, 11
    move $a0, $t0
    syscall

    j print_previous  # Jump to print the previous alphabet

print_uppercase_next:
    # Print the uppercase next alphabet 'A'
    li $t0, 65
    li $v0, 4
    la $a0, result_message
    syscall

    li $v0, 11
    move $a0, $t0
    syscall

    j print_previous  # Jump to print the previous alphabet

print_lowercase:
    # Print the lowercase next alphabet
    li $v0, 4
    la $a0, result_message
    syscall

    addi $t0, $t0, 1  # Increment the ASCII value for the next character
    li $v0, 11
    move $a0, $t0
    syscall

    j print_previous  # Jump to print the previous alphabet

print_lowercase_next:
    # Print the lowercase next alphabet 'a'
    li $t0, 97
    li $v0, 4
    la $a0, result_message
    syscall

    li $v0, 11
    move $a0, $t0
    syscall

print_previous:
    # Print the previous alphabet
    li $v0, 4
    la $a0, result_message2
    syscall

    sub $t0, $t0, 2  # Decrement the ASCII value for the previous character
    li $v0, 11
    move $a0, $t0
    syscall

    # Exit the program
    li $v0, 10
    syscall
