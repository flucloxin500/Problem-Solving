#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main (){

    long long d , f = 0;
    

    scanf("%lld", &d);
    long long x = 1 ;
    
    while ( x <= d)
    {
        x = x * 2 ;
        f++ ;
    }

    printf("%d", f-1);
    

    return 0 ;
}
