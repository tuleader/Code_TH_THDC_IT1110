#include <stdio.h>
int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}
int main()
{
    int n;
    double x, tong = 0;
    scanf("%d%lf", &n, &x);
    if (n <= 0)
    {
        printf("Error");
        return 0;
    }
    for (int i = 0; i <= n; i++)
    {
        tong = tong + pow(x, i) / factorial(i);
    }
    printf("%lf", tong);
    return 0;
}