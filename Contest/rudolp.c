#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main ()
{
    int n ;
    scanf("%d", &n) ;

    int i , j ;

    char tic[3][3] ;

    while ( n--)
    {
        for ( i = 0 ; i < 3  ; i++)
        {
            scanf("%s" , tic[i]) ;
        }
    }

    for ( i = 0 ; i < 3  ; i++)
        {
            printf("%s\n" , tic[i]) ;
        }

    
    return 0 ;
}
