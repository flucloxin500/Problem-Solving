#include<stdio.h>
#include<math.h>
int  main (){

    double a,b,c,peri,are;
    scanf("%lf%lf%lf",&a,&b,&c);
    peri = a+b+c;
    are = ((a+b)/2)*c;

    if (a+b>c && b+c>a && c+a>b)
    {
        printf("Perimetro = %.1lf\n", peri);
    }
    else 
    {
        printf("Area = %.1lf\n", are);
    }
    

    return 0;
}