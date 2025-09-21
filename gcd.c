#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <ctype.h>
#include <math.h>
 
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int num1, num2;
    printf("Enter two integers: ");
    if (scanf("%d %d", &num1, &num2) != 2) {
        printf("Invalid input. Please enter two integers.\n");
        return 1;
    }
    if (num1 < 0 || num2 < 0) {
        printf("Please enter non-negative integers only.\n");
        return 1;
    }
    int result = gcd(num1, num2);
    printf("GCD of %d and %d is %d\n", num1, num2, result);
    return 0;
}