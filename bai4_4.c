#include <stdio.h>
int timUCLN(int a, int b)
{
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
}
int main()
{
    int a, b, ucln, bcnn;
    scanf("%d%d", &a, &b);
    if (a <= 0 || b <= 0)
    {
        printf("ERROR");
        return;
    }
    ucln = timUCLN(a, b);
    bcnn = a * b / ucln;
    printf("%d\n%d", ucln, bcnn);
    return 0;
}