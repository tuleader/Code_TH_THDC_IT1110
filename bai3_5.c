#include <stdio.h>
#include <math.h>
int main()
{
    double x, y, z, F;
    scanf("%lf%lf%lf", &x, &y, &z);
    F = ((x + y + z) / (x * x + y * y + 1)) - fabs(x - z * cos(y));
    printf("%lf", F);
    return 0;
}