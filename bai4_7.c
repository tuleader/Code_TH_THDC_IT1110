#include <stdio.h>
int main()
{
    int n;
    double x, tong;
    scanf("%d%lf", &n, &x);
    if (n <= 0)
    {
        printf("Error");
        return 0;
    }
    for (int i = 0; i <= n; i++)
    {
        tong = tong + pow(x, i) * pow(-1, i);
    }
    printf("%lf", tong);
    return 0;
}