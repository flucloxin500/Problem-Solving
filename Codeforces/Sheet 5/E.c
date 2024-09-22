#include<stdio.h>

void Swap(int x , int y)
{
    int a ;
    a = x ;
    x = y ;
    y = a ;

    printf("%d %d" , x , y);
    
}

int main ()
{
    int a , b;
    scanf("%d %d", &a,&b);

    Swap(a,b);
    return 0 ;
}
