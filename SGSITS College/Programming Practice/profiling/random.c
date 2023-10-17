#include <stdio.h>
#include <stdlib.h>

// A function to generate random numbers and store them in an array
void generate_random_numbers(int* array, int size) {
for (int i = 0; i< size; i++) {
array[i] = rand() % 1000;
    }
}

// A function to find the sum of elements in an array
int find_sum(int* array, int size) {
int sum = 0;
for (int i = 0; i< size; i++) {
sum += array[i];
    }
return sum;
}

// A function to find the product of elements in an array
int find_product(int* array, int size) {
int product = 1;
for (int i = 0; i< size; i++) {
product *= array[i];
    }
return product;
}

int main() {
const int size = 10000; // Size of the array (adjust as needed)
int* array = (int*)malloc(size * sizeof(int));

generate_random_numbers(array, size);

int sum = find_sum(array, size);
int product = find_product(array, size);

printf("Sum: %d\n", sum);
printf("Product: %d\n", product);

free(array);

return 0;
}
