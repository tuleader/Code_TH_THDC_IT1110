#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if (n < 2 || n > 10)
    {
        printf("0");
        return;
    }

    int arr[10];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int maxProduct = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int product = arr[i] * arr[i + 1];
        if (product > maxProduct)
        {
            maxProduct = product;
        }
    }

    if (maxProduct <= 0)
    {
        maxProduct = 0;
    }

    printf("%d", maxProduct);

    return 0;
}