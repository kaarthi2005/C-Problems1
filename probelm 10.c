#include <stdio.h>
#include <math.h>   

int main() {
    double P, R, T, Amount;

    printf("Enter Principal, Rate of Interest, and Time: ");
    scanf("%lf %lf %lf", &P, &R, &T);

    Amount = P * pow((1 + R / 100), T);

    printf("Amount = %.0lf\n", Amount);

    return 0;
}
