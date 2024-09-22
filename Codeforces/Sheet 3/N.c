#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main ()
{
    int A , B ;
    char code[10];
    int f = 0  , cnt = 0;
    scanf("%d %d %s ", &A, &B,code);

    int i ;
    int limit ;
    limit = A + B + 1 ;

    //scanf("%s", &code);
    

    /*for ( i = 1 ; i <= limit ; i++)
    {
        printf("%c", code[i]);
    }*/

    for ( i = 0 ; i < limit ; i++)
    {
        if ( code[i] == '-')
        {
            f = i ;
        }
        else if ( code[i] >= '0' && code[i] <= '9')
        {
            cnt++ ;
        }
    }

    if ( f+1 == A+1 && cnt == strlen(code) - 1)
    {
        printf("Yes\n") ;
    }

    else
    {
        printf("No\n") ;
    }


    return 0 ;
}
