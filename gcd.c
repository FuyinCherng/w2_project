#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <ctype.h>
#include <math.h>
// hello from the github

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int number1, number2;
    printf("Enter two integers: ");
    if (scanf("%d %d", &number1, &number2) != 2) {
        printf("Invalid input. Please enter two integers.\n");
        return 1;
    }
    if (number1 < 0 || number2 < 0) {
        printf("Please enter non-negative integers only.\n");
        return 1;
    }
    int result = gcd(number1, number2);
    printf("GCD of %d and %d is %d\n", number1, number2, result);
    return 0;
}
