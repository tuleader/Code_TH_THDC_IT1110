#include <stdio.h>
int main()
{
    int n;
    double x, tong = 1.0;
    scanf("%lf%d", &x, &n);
    if (n < 1 || x < 0)
    {
        printf("Error");
        return 0;
    }
    for (int i = 1; i <= n; i++)
    {
        scanf("%d%lf", &n, &x);
        tong = tong + pow(x, i) / i;
    }
    printf("%.4lf", tong);
    return 0;
}
