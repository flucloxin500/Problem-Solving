#include <stdio.h>

int main (){

    double x,pi,y;
    scanf("%lf",&x);

    pi = 3.14159;

    y = (4.0/3)*pi*(x*x*x);

    printf("VOLUME = %.3lf\n", y);

return 0;
}