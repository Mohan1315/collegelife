# Program to read an integer number from a user, and
# print that number back to the console.

.text
main:                                                         
 # Prompt for the integer to enter
 li $v0, 4
 la $a0, prompt
 syscall
 
 li $v0, 5                                                           # Read the integer and save it in $s0
 syscall
 move $s0, $v0
 li $v0, 4                                                   # Output the text
 la $a0, output
 syscall

 li $v0, 1                                                             # Output the number
 move $a0, $s0
 syscall

 li $v0, 10                                                     # Exit the program
 syscall

.data
prompt: .asciiz "Please enter an integer: "
output: .asciiz "\nYou typed the number "