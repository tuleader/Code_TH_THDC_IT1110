#include <stdio.h>
int main()
{
    double a, b, c, x, y;
    scanf("%lf%lf", &x, &y);
    a = pow(x, 2) + pow(y, 2);
    b = pow(x + y, 2);
    c = pow(x - y, 2);
    printf("%lf\n%lf\n%lf", a, b, c);
    return 0;
}