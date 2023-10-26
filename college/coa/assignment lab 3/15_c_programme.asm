.data
    a: .word 0x12345  	  # Initialize 'a' with 0x12345
    #b: .word 7       	  # Initialize 'b' with 7(Error occured in this line)
    result: .word 0   	  # Initialize 'result' with 0

.text
.globl main

main:
    # Load the value of 'a' into a register
    lw $t0, a

    # Load the value of 'b' into a register
    #lw $t1, b
    ori     $t1,$0,0x7 		#This is use for solve the error of variable b

    # Add 'a' and 'b' and store the result in 'result'
    add $t2, $t0, $t1
    sw $t2, result

    # Set the return value to 1
    li $v0, 10   # Exit syscall code
    li $a0, 1    # Exit status 1
    syscall



