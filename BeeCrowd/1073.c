#include <stdio.h>


int main (){

    int n , i , a;

    scanf("%d", &n);

    for ( i = 1 ; i <= n ; i++)
    {
        a = i * i;
        if ( i % 2 == 0)
        {
            printf("%d^2 = %d\n", i,a);
        }

    }

    
return 0;
}