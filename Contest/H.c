#include <stdio.h>
#include <math.h>


int main (){

    int n, x , y , z , i , cnt = 0  ;
    scanf("%d", &n );
    
    for ( i = 1 ; i <= n ; i++)
    {
        scanf("%d %d %d", &x,&y,&z);
        if ( x == 1 && y == 1 && z == 1)
        {
            cnt+= 3;
        }
        else if ( x == 1 && y == 1 && z == 0)
        {
            cnt+= 2;
        }
        else if ( x == 1 && y == 0 && z == 0)
        {
            cnt+= 1;
        }
    }

    if ( cnt == 3)
    {
        printf
    }
return 0;
}