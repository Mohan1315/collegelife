#include <stdio.h>

// Function to print the binary representation of an integer using recursion
void printBinary(int n) {
    if (n == 0) {
        return; // Base case: when n becomes 0, stop recursion
    }
    
    // Recursive call: print the binary representation of n/2
    printBinary(n / 2);
    
    // Print the remainder (0 or 1) after dividing by 2
    printf("%d", n % 2);
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("Binary representation of negative numbers is not supported.\n");
    } else {
        printf("Binary representation of %d is: ", num);
        printBinary(num);
        printf("\n");
    }
    
    return 0;
}
