#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main ()
{
    char gb[100010];
    int n ;


    scanf("%d", &n) ;

    for ( int i = 0 ; i < n ; i++)
    {

        scanf("%s", gb);
        int size , j ;

    size = strlen(gb) ;
    int good = 0 ;
        for ( j = 0 ; j < size-2 ; j++)
    {
        if ( gb[j] == '1' && gb[j+1] == '0' && gb[j+2] == '1' ||
            gb[j] == '0' && gb[j+1] == '1' && gb[j+2] == '0' )
        {
            good++;
            break;
        }
    }
    if (good==1)
    {
        printf("Good\n");
    }
    else
    {
        printf("Bad\n");
    }
    }



    return 0 ;
}
