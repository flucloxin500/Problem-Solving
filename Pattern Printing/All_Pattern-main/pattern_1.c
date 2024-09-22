#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

void array_sorting ( int N , int A[10010] )
{
    int i , j , t;

    for ( i = 0 ; i < N-1 ; i++)
    {
        for ( j = 0 ; j < N-1-i ; j++)
        {
           if ( A[j]>A[j+1])
            {
                t = A[j];
                A[j] = A[j+1];
                A[j+1] = t ;
            } 
        }
    }


}

int main ()
{
    int n  ;
    scanf("%d", &n);

    int A[n] , B[n] ;
    for ( int i = 0 ; i < n ; i++)
    {
        scanf("%d", &A[i]) ;
    }

    array_sorting(n,A[n]);
    
    for ( int i = 0 ; i < n ; i++)
    {
        printf("%d", A[i]) ;
    }

    return 0 ;
}
