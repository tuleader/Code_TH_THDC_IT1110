#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    double x, tong = 0.0;
    scanf("%lf%d", &x, &n);
    if (n < 1 || x < 0)
    {
        printf("Error");
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        tong = sqrt(tong + x);
    }
    printf("%.4lf", tong);
    return 0;
}