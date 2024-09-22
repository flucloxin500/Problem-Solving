#include<stdio.h>
#include<math.h>

int main (){

    int a,b,c;
    int d ;

    scanf("%d %d %d", &a,&b,&c);
    a = a*a ;
    b = b*b ;
    c = c*c ;

    d = a + b ;

    if ( d < c)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    

    return 0 ;
}
