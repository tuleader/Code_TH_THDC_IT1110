#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n < 2)
    {
        printf("Khong phai so nguyen to");
        return 0;
    }
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            printf("Khong phai so nguyen to");
            return 0;
        }
    }
    printf("La so nguyen to");
    return 0;
}