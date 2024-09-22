#include<stdio.h>
#include<math.h>


int main (){
    int pasha,arthur,alexander;

    scanf("%d %d %d", &pasha , &arthur , &alexander) ;
    
    int arthurcake[arthur+2] , alexandercake[alexander+2] ;

    for ( int i = 1 ; i <= arthur ; i++)
    {
        scanf("%d", &arthurcake[i]) ;
        
        for ( int j = 1 ; j <= alexander ; j++)
        {
            scanf("%d", &alexandercake[j]) ;
        }
    }
    return 0;
}