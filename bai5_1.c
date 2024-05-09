#include <stdio.h>
int main()
{
    int n, a[100], tong = 0;
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Error");
        return;
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
        tong = tong + a[i];
    }
    printf("\n%d", tong);
}