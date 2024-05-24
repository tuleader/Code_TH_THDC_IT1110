#include <stdio.h>
int main()
{
    double giaBan, canNang, thueGTGT, thanhTien;
    scanf("%lf", &giaBan);
    scanf("%lf", &canNang);
    scanf("%lf", &thueGTGT);
    thanhTien = giaBan * canNang * (1 + thueGTGT / 100);
    printf("%lf", thanhTien);
    return 0;
}