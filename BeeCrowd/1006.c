#include <stdio.h>
int main (){

    double A,B,C,X;

    scanf("%lf%lf%lf",&A,&B,&C);

    A=A*2;

    B=B*3;

    C=C*5;

    X=(A+B+C)/10;

    printf("MEDIA = %.1lf\n",X);
    
     return 0;
}