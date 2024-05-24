#include <stdio.h>
int main()
{
    int n, tram, chuc, donVi, tong;
    scanf("%d", &n);
    if (n <= 0 || n >= 1000)
    {
        printf("ERROR");
        return 0;
    }
    tram = n / 100;
    chuc = (n - tram * 100) / 10;
    donVi = (n - tram * 100 - chuc * 10);
    tong = tram + chuc + donVi;
    printf("%d", tong);
    return 0;
}