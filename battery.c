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

