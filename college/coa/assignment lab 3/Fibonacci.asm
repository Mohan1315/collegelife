.data
    result_message: .asciiz "Fibonacci Series: "
    
.text
.globl main

main:
    # Initialize variables
    li $t0, 0   			 # First Fibonacci number (F(0))
    li $t1, 1     			 # Second Fibonacci number (F(1))
    li $t2, 10     			 # Number of Fibonacci numbers to generate
    li $t3, 0      			 # Counter

    li $v0, 4				 # Print the result message
    la $a0, result_message
    syscall

fib_loop:
    li $v0, 1				# Print the current Fibonacci number
    move $a0, $t0
    syscall

    # Calculate the next Fibonacci number
    add $t4, $t0, $t1  # F(n) = F(n-1) + F(n-2)
    
    # Swap variables to prepare for the next iteration
    move $t0, $t1  # F(n-2) = F(n-1)
    move $t1, $t4  # F(n-1) = F(n)
    
    addi $t3, $t3, 1			 # Increment the counter

    # Check if we have generated the desired number of Fibonacci numbers
    beq $t3, $t2, exit
    j fib_loop

exit:
    li $v0, 10				# Exit the program
    syscall
