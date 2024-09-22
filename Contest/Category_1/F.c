#include <stdio.h>
#include <math.h>


int main (){

    int n, x , i , cnt = 0  ;
    scanf("%d", &n );
    
    for ( i = 1 ; i <= n ; i++)
    {
        scanf("%d", &x);

        if ( x % 2 == 0)
        {
            if ( x % 3 == 0 || x % 5 == 0)
            {
                cnt++;
            }
            else if( x % 3 != 0 || x % 5 != 0)
            {
                printf("DENIED\n");
                break;
            }
        }
    }

    if ( cnt > 0)
    {
        printf("APPROVED\n");
    }

    

return 0;
}