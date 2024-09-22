#include <stdio.h>
#include <math.h>

int main (){

    int i = 1, n , even = 0,positive = 0, negetive = 0, odd = 0;

    while ( i <= 5)
    {
        scanf("%d", &n);
        if ( n % 2 == 0)
        {
            
            even++;
        }
        if ( n % 2 != 0)
        {
            odd++;
        }
        if ( n > 0 )
        {
            
            positive++;
        }
        if ( n < 0)
        {
            
            negetive++;
        }

        i++;
    }

    printf("%d valor(es) par(es)\n", even);
    printf("%d valor(es) impar(es)\n", odd);
    printf("%d valor(es) positivo(s)\n", positive);
    printf("%d valor(es) negativo(s)\n", negetive);




return 0;
}