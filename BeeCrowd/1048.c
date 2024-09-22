#include<stdio.h>
#include<math.h>
int main()
{

    double A,a,b,h,d,e;
    char c = '%';
    scanf("%lf", &A);
    a = (A + (A*.15));
    b = (A + (A*.12));
    h = (A + (A*.1));
    d = (A + (A*.07));
    e = (A + (A*.04));

    if (A >= 0 && A <= 400)
    {
        printf("Novo salario: %.2lf\n",a);
        printf("Reajuste ganho: %.2lf\n",A * .15);
        printf("Em percentual: 15 %c\n",c);
    }

    if (A > 400 && A <= 800)
    {
        printf("Novo salario: %.2lf\n",b);
        printf("Reajuste ganho: %.2lf\n",A * .12);
        printf("Em percentual: 12 %c\n",c);
    }

    if (A > 800 && A <= 1200)
    {
        printf("Novo salario: %.2lf\n",h);
        printf("Reajuste ganho: %.2lf\n",A * .10);
        printf("Em percentual: 10 %c\n",c);
    }

    if (A > 1200 && A <= 2000)
    {
        printf("Novo salario: %.2lf\n",d);
        printf("Reajuste ganho: %.2lf\n",A * .07);
        printf("Em percentual: 7 %c\n",c);
    }

    if ( A > 2000)
    {
        printf("Novo salario: %.2lf\n",e);
        printf("Reajuste ganho: %.2lf\n",A * .04);
        printf("Em percentual: 4 %c\n",c);
    }




    return 0;
}