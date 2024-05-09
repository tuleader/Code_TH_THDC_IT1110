#include <stdio.h>
int main()
{
    int n, a[100];
    double tong = 0, trungBinh = 0, demDuong = 0, demAm = 0;
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Error");
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] > 0)
        {
            tong = tong + a[i];
            demDuong++;
        }
        else
        {
            trungBinh = trungBinh + a[i];
            demAm++;
        }
    }

    if (demAm != 0)
    {
        trungBinh = trungBinh / demAm;
        printf("%lf ", trungBinh);
    }
    else
        printf("Mang khong co so am ");
    if (demDuong != 0)
    {
        tong = tong;
        printf("%lf", tong);
    }
    else
        printf("Mang khong co so duong");
    return 0;
}