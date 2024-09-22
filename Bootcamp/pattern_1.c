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
        for ( j = 1 ; j <= row ; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}