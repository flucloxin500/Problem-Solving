#include <stdio.h>

int main (){

    char name;
    double a,b,x;

    scanf("%s%lf%lf",&name,&a,&b);

    x= (b/100)*15 + a;
    
    printf("TOTAL = R$ %.2lf\n", x);

return 0;
}