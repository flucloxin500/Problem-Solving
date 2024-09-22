#include <stdio.h>

int main() {
    char s1[100010];
    int i ;

    scanf("%s", s1);
    int sum = 0 ;

    for ( i = 0 ; s1[i] != '\0' ; i++)
    {
        sum += (s1[i] - '0' );
    }

    printf("%d", sum);
    
    return 0;
}