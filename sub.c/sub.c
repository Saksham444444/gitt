#include <stdio.h>

void extractDigits(int num, int digits[], int *count);

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int digits[10]; // Array to store individual digits
    int count = 0;  // Variable to store the count of digits

    // Extract digits from the number
    extractDigits(num, digits, &count);

    // Display the individual digits
    printf("Individual digits of %d are: ", num);
    for (int i = 0; i < count; i++) {
        printf("%d ", digits[i]);
    }
    printf("\n");

    return 0;
}

// Function to extract individual digits from a number and store them in an array
void extractDigits(int num, int digits[], int *count) {
    int temp = num;
    *count = 0;

    // Extract digits and store them in the array
    while (temp != 0) {
        digits[*count] = temp % 10;
        temp /= 10;
        (*count)++;
    }

    // Reverse the array to get digits in the correct order
    for (int i = 0; i < *count / 2; i++) {
        int temp = digits[i];
        digits[i] = digits[*count - i - 1];
        digits[*count - i - 1] = temp;
    }
}
