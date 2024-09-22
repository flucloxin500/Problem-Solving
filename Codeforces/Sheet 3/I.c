#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main ()
{
    int n , t ;
    int i , j ;
    
    scanf("%d", &t) ;

    while ( t-- )
    {

        long long sum = 0 , mn = 1e9 ;
        scanf("%d", &n) ;

        int arr[n] ;

        for ( i = 0 ; i < n ; i++)
        {
            scanf("%d", &arr[i]) ;
        }

        for ( i = 0 ; i < n ; i++)
        {
            for ( int j = i + 1 ; j < n ; j++)
            {
                sum = arr[i] + arr[j] + ( j + 1 ) - ( i + 1) ;
                if ( mn > sum)
                {
                    mn = sum ;
                    sum = 0 ;
                }
            }
        }

        printf("%d\n", mn) ;


    }
    
    return 0 ;
}
