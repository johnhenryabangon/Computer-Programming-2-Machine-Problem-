//Function that returns the GCD of 2 integers

#include <stdio.h>

int gcd(int b, int s);

int main() {
    int b, s, result;
    
    printf("Input the first integer: ");
    scanf("%d", &b);

    printf("Input the second integer: ");
    scanf("%d", &s);

    result = gcd(b, s);
    printf("\nGCD: %d\n", result);

    return 0;
}

int gcd(int b, int s) {
    int r = b % s;

    while (r != 0) {
        b = s;
        s = r;
        r = b % s;
    }

    return s;
}


