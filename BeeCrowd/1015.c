#include<stdio.h>
#include <math.h>
int  main (){

    double x1,y1,x2,y2,a,b,c,d,e;

    scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);

    a = x2 - x1;
    b = y2 - y1;
    c = pow (a,2);
    d = pow (b,2);
    e = sqrt (c+d);

    

    printf("%.4lf\n",e);


    
    return 0;
}