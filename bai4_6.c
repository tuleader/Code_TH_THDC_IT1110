#include <stdio.h>
int main()
{
    int n;
    double x, tong;
    scanf("%d%lf", &n, &x);
    if (n <= 0)
    {
        printf("Error");
        return;
    }
    for (int i = 0; i <= n; i++)
    {
        scanf("%d%lf", &n, &x);
        tong = tong + pow(x, i);
    }
    printf("%lf", tong);
    return 0;
}