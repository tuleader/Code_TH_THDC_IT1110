#include <stdio.h>
#define PI 3.14159
int main()
{
    double r, chuvi, dientich;
    scanf("%lf", &r);
    if (r <= 0)
    {
        printf("ERROR");
        return 0;
    }
    chuvi = 2 * PI * r;
    dientich = PI * r * r;
    printf("%lf\n", chuvi);
    printf("%lf", dientich);
    return 0;
}