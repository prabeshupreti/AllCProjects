#include <stdio.h>
#include <stdbool.h>

int main() {
    int number;
    bool isPrime = true;

    printf("Enter an integer: ");
    int IsInteger = scanf_s("%d", &number);
    if (IsInteger != 1) {
        printf("The input is not an integer.\n");
        return 1;
    }

    if (number <= 1) {
        isPrime = false;
    }
    else if (number == 2 || number == 3) {
        isPrime = true;
    }
    else if (number % 2 == 0 || number % 3 == 0) {
        isPrime = false;
    }
    else {
        for (int i = 5; i * i <= number; i += 6) {
            if (number % i == 0 || number % (i + 2) == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d is a prime number.\n", number);
    }
    else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
