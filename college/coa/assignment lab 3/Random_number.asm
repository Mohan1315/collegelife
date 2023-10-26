.data
random_min:  .word 1     # Minimum value for the random number (1)
random_max:  .word 100   # Maximum value for the random number (100)
format_string:  .asciiz "Random number between 1 to 100 : "

.text
.globl main

main:
    # Initialize the random number generator
    li $v0, 43         # syscall code for srandom
    li $a0, 42          # Seed for random number generation (you can use any value)
    syscall

    li $v0, 43          # syscall code for random
    lw $a0, random_min  # Minimum value
    lw $a1, random_max  # Maximum value
    syscall
    move $t0, $v0      # Store the random number in $t0

    # Ensure the random number is at least 1
    bge $t0, $zero, random_done
    addi $t0, $t0, 1

random_done:
   

    # Print a newline character
    li $v0, 4           # syscall code for print string
    la $a0, format_string
    syscall

    # Print the random number
    li $v0, 1           # syscall code for print integer
    move $a0, $t0
    syscall

    # Exit the program
    li $v0, 10          # syscall code for exit
    syscall