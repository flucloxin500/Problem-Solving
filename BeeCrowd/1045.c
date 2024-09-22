#include<stdio.h>
#include<math.h>
int  main (){

    double A,B,C,a,b,c;
    scanf("%lf%lf%lf",&A,&B,&C);
    a = pow(A, 2);
    b = pow(B, 2);
    c = pow(C, 2);

    if ( A >= B+C || B >= C+A || C >= A+B )
    {
        
        printf("NAO FORMA TRIANGULO\n");
        if (a == b)
        {

        }
        
        else if (a == b+c )
        {
        printf("TRIANGULO RETANGULO\n");
        }
        else if (a > b+c )
        {
        printf("TRIANGULO OBTUSANGULO\n");
        }
        else if (a < b+c )
        {
        printf("TRIANGULO ACUTANGULO\n");
        }
        else if (a < b+c )
        {
        printf("TRIANGULO ACUTANGULO\n");
        }
        else if (A == B && B == C )
        {
        printf("TRIANGULO EQUILATERO\n");
        }
    }
    
    else 
    {
        printf("TRIANGULO ISOSCELES\n");
    }
    

    return 0;
}