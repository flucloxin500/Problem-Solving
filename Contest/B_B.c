#include<stdio.h>
#include<math.h>

int main (){

    int a,b,c;
    int d ;
    scanf("%d %d %d", &a,&b,&c);

    int i , f = 0 , y;

    for (i = a ; i <= b ; i++)
    {
        if (i % c == 0)
        { 
            f++;
            y = i ;
            break;
        }
    }
    if ( f > 0)
    {
        printf("%d\n", y);
    }
    else 
    {
        printf("-1\n");
    }
    

    return 0 ;
}
