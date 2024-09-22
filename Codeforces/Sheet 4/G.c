#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    char s[100010];
    int n,i;
    int x ;

    scanf("%s", &s);
    n = strlen(s);

    for ( i = 0 ; i < n ; i++)
    {
        if ( s[i] >= 'a' && s[i] <= 'z')
        {
            printf("%c", s[i] - 32);
        }
        else if ( s[i] >= 'A' && s[i] <= 'Z')
        {
            printf("%c", s[i] + 32);
        }
        else if ( s[i] == ',' )
        {
            printf("%c", s[i] - 12);
        }
    }
        

    return 0;
}