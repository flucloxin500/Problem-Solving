#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    char s[101];
    int n,i;
    int x ;

    scanf("%d", &n);

    for ( i = 0 ; i < n ; i++)
    {
        scanf("%s", s);
        x = strlen(s);
        if ( x <= 10 )
        {
            printf("%s\n", s);
        }
        else 
        {
            printf("%c%d%c\n", s[0], x-2 , s[x-1] );
        }
    }
        

    return 0;
}