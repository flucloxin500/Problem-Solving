#include <stdio.h>
#include <math.h>


int main (){

    int  x , y , z , cnt = 0  ;
    
    
    scanf("%d %d %d", &x,&y,&z);
    cnt += x+y+z ;

    if ( cnt >= 22)
    {
        printf("bust\n");
    }
    else
    printf("win\n");
return 0;
}