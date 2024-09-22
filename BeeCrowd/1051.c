#include <stdio.h>
int main()
{
    double n,a,b,c,d,e;
    scanf("%lf", &n);

    a = ((1000*8)/100);
    b = ((1500*18)/100);

    if (n >= 0.00 && n <= 2000.00)
    {

        printf("Isento\n");
    }

    else if (n >= 2000.01 && n <= 3000.00)
    {
        c = n - 2000;
        printf("R$ %.2lf\n", (c * 8) /100);
    }

    else if (n >= 3000.01 && n <= 4500.00)
    {
        d = n - 3000;
        printf("R$ %.2lf\n", (((d * 18) /100)+a));
    }
    else if (n > 4500.00)
    {
        e = n - 4500;
        printf("R$ %.2lf\n", (((e * 28) /100)+(a+b)));
    }

    return 0;
}