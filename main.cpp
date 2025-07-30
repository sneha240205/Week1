#include <stdio.h>

int main() {
    int num, reversed = 0;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    if(num < 100 || num > 999) {
        printf("Invalid input. Please enter a 3-digit number.\n");
        return 1;
    }

    while(num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    printf("Reversed number: %d\n", reversed);
    return 0;
}
