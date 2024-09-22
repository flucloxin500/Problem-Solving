#include<stdio.h>



void Array_Serial( int n )
{
    int i ;
    for ( i = 1 ; i < n ; i++)
    {
        printf("%d ", i);
    }
    printf("%d", n);
}

int main ()
{
    int n,arr[100],i , s;

    scanf("%d",&n);

    Array_Serial (n);
    
    return 0 ;
}
