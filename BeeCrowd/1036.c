#include<stdio.h>
#include<math.h>
int main()
{

    double A,B,C,a,b,c;
    scanf("%lf%lf%lf",&A,&B,&C);

    a = (B*B) - (4.00*A*C);

    b = (-B+sqrt(a))/(2.00*A);

    c = (-B-sqrt(a))/(2.00*A);

    if (a != 0 && a > 0)
    {
        printf("R1 = %.5lf\nR2 = %.5lf\n",b,c);
    }
    else printf("Impossivel calcular\n");
    



    return 0;
}