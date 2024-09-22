#include<stdio.h>
int main (){
    int N ;

    int  i ;

    char S[25], T[25] ;

    scanf("%d", &N) ;

    for ( i = 0 ; i < N ; i++)
    {
        scanf("%s " , S[i]) ;
        scanf("%s" , T[i]) ;
    }

    for ( i = 0 ; i <  N ; i++)
    {
        printf("%s " , S[i]) ;
        printf("%s" , T[i]) ;
    }
    return 0 ;
}