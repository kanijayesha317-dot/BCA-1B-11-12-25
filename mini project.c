#include <stdio.h>

int main() {
    int num, sum;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Repeat until number becomes a single digit
    while (num > 9) {
        sum = 0;

        // Extract digits and add them
        while (num > 0) {
            sum = sum + (num % 10);
            num = num / 10;
        }

        num = sum; // Assign sum back to num
    }

    printf("Digital Root is: %d\n", num);

    return 0;
}

