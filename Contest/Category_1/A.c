#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main (){

    long long x , y , i , sum = 1;

    scanf("%lld %lld" , &x ,&y);

    for ( i = x ; i <= y ; i++)
    {
        sum = sum * i ;
    }

    if ( sum > 0)
    {
        printf("Positive\n");
    }
    else if ( sum < 0)
    {
        printf("Negative\n");
    }
    else if ( sum == 0)
    {
        printf("Zero\n");
    }


    return 0 ;
}
