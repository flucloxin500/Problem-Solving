#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    char s[1010];
    int n,i;
    int x = 0 ;

    scanf("%s", &s); 
    n = strlen(s) ;   
    for ( i = 0 ; i < n/2 ; i++)
        if ( s[i] == s[n-i-1]) 
        {                      
            x++ ;             
        }
    }

    if ( x == n/2 )              
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
        

    return 0;
}