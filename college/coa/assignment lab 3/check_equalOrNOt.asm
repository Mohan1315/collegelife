.data
    prompt1: .asciiz "Enter the first integer: "
    prompt2: .asciiz "Enter the second integer: "
    equal_message: .asciiz "equal"
    not_equal_message: .asciiz "not equal"
.text
.globl main
main:
    li $v0, 4						# Prompt for the first integer
    la $a0, prompt1
    syscall

    li $v0, 5						# Read the first integer from the user
    syscall
    move $t0, $v0

    li $v0, 4						# Prompt for the second integer
    la $a0, prompt2
    syscall

    li $v0, 5						# Read the second integer from the user
    syscall
    move $t1, $v0

    beq $t0, $t1, equal					# Compare the two integers
    j not_equal

equal:
    li $v0, 4						# Output "equal" if integers are equal
    la $a0, equal_message
    syscall
    j exit

not_equal:
    li $v0, 4						# Output "not equal" if integers are not equal
    la $a0, not_equal_message
    syscall
exit:
    li $v0, 10						# Exit the program
    syscall
