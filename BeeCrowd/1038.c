#include<stdio.h>
#include <math.h>
int  main (){

    double a,b,c,d,e;
    int X,Y,Z;
    a = 4.00;
    b = 4.50;
    c = 5.00;
    d = 2.00;
    e = 1.50;
    scanf("%d %d", &X,&Y);

    if(X == 1)
    {
        printf("Total: R$ %.2lf\n",(a*Y));
    }

    if(X == 2)
    {
        printf("Total: R$ %.2lf\n",(b*Y));
    }

    if(X == 3)
    {
        printf("Total: R$ %.2lf\n",(c*Y));
    }

    if(X == 4)
    {
        printf("Total: R$ %.2lf\n",(d*Y));
    }

    if(X == 5)
    {
        printf("Total: R$ %.2lf\n",(e*Y));
    }


    return 0;
}