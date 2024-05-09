#include <stdio.h>
#include <math.h>
#include <complex.h>

void solveQuadraticEquation(double a, double b, double c) {
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Phuong trinh vo so nghiem");
            } else {
                printf("Phuong trinh vo nghiem");
            }
        } else {
            double x = -c / b;
            printf("%lf", x);
        }
    } else {
        double delta = b * b - 4 * a * c;
        if (delta > 0) {
            double x1 = (-b + sqrt(delta)) / (2 * a);
            double x2 = (-b - sqrt(delta)) / (2 * a);
            printf("%lf\n%lf", x1, x2);
        } else if (delta == 0) {
            double x = -b / (2 * a);
            printf("%lf", x);
        } else {
            double complex x1 = (-b + csqrt(delta)) / (2 * a);
            double complex x2 = (-b - csqrt(delta)) / (2 * a);
            printf("%lf+%lfi\n", creal(x1), cimag(x1));
            printf("%lf%lfi", creal(x2), cimag(x2));
        }
    }
}

int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    solveQuadraticEquation(a, b, c);
    return 0;
}