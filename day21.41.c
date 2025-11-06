//Q41: Write a program to swap the first and last digit of a number.

#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits, temp, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    lastDigit = num % 10;

    digits = (int)log10(num);
    firstDigit = num / pow(10, digits);

    result = lastDigit * pow(10, digits) + temp - lastDigit + firstDigit;

    printf("Number after swapping first and last digit = %d\n", result);

    return 0;
}
