#include<stdio.h>
#include<math.h>

int  main (){
    
    int   n , i , x , y , z ;

    scanf("%d",&n);

    for ( i=1 ; i<= n ; i++)
    {
       scanf("%d %d %d" ,&x , &y , &z);

       if ( x + y == z)
       {
        printf("+\n");
       }
       else if ( x - y == z)
       {
        printf("-\n");
       }
    }
    


    return 0 ;
}