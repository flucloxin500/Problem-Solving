#include <stdio.h>

int main (){

    double x,y,z,pi;

    scanf ("%lf%lf%lf",&x,&y,&z);

    pi = 3.14159;
    printf("TRIANGULO: %.3lf\n", .5*z*x);
    printf("CIRCULO: %.3lf\n", pi*z*z);
    printf("TRAPEZIO: %.3lf\n", ((x+y)/2)*z);
    printf("QUADRADO: %.3lf\n", y*y);
    printf("RETANGULO: %.3lf\n", y*x);

return 0;
}