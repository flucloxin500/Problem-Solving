#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main (){

    int A , B , i , cnt = 0 ;

    scanf("%d %d" , &A ,&B);

    for ( i = 0  ; i <= B ; i++)
    {
        if ( i >= A && i <= B)
        {
            cnt++;
        }
    }

    printf("%d\n", cnt) ;

    


    return 0 ;
}
