#include <stdio.h>
#include <stdlib.h> // For abs()
#include <string.h>
#include <ctype.h>
#include <math.h>


int battery_life(int capacity, int consumption) {
    if (consumption <= 0) {
        return -1; // Invalid consumption rate
    }
    return capacity / consumption;
}

int main() {
    int capacity, consumption;
    printf("Enter battery capacity (mAh) and consumption rate (mA): ");
    if (scanf("%d %d", &capacity, &consumption) != 2) {
        printf("Invalid input. Please enter two integers.\n");
        return 1;
    }
    if (capacity < 0 || consumption < 0) {
        printf("Please enter non-negative values only.\n");
        return 1;
    }
    int life = battery_life(capacity, consumption);
    if (life == -1) {
        printf("Consumption rate must be greater than zero.\n");
        return 1;
    }
    printf("Estimated battery life: %d hours\n", life);
    return 0;
}

