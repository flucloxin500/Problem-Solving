#include<stdio.h>
#include<math.h>

int  main (){

    int n , row , i , k , j  ;
    scanf("%d", &n);

    for ( row = 1 ; row <= n ; row ++)
    {
        for ( i = 1 ; i <= ( n - row) ; i++)
        {
            printf(" ");

        }
        for ( j = 1 ; j <= (2*row - 1) ; j++)
        {
            printf("*");
        }
        for ( i = 1 ; i <= ( n - row) ; i++)
        {
            printf(" ");

        }
        printf("\n");
    }
}