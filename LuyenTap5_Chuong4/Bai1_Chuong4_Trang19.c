#include <stdio.h>

int findMax(int a, int b, int c) {
    if (a > b && a > c) {
        return a;
    }
    else if (b > c) {
        return b;
    }
    else {
        return c;
    }
}

int main() {
    int num = 12, num2 = 25, num3 = 18;
    int max = findMax(num, num2, num3);
    printf("The largest number among %d, %d, and %d is: %d\n", num, num2, num3, max);
    return 0;
}