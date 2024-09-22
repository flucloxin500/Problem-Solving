#include <stdio.h>
#include <string.h>

int main()
{
    char s[10001];
    scanf("%s", s);
    
    int i,t , x;

    x = strlen(s) ;

    for ( i = 0 ; i < x ; i++)
    {
        if ( s[i] > s[i+1] )
        {
            t = s[i] ;
            s[i] = s[i+1] ;
            s[i+1] = t ;
        }
    }

    for ( i = 0 ; i < x ; i++)
    {
        printf("%c", s[i]) ;
    }
 return 0;
}