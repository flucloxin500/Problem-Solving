#include<stdio.h>

int Sum(int x , int y)
{
    int a ;
    a = x + y ;
    return a ;
}

int main ()
{
    int a , b;
    scanf("%d %d", &a,&b);

    printf("%d", Sum(a , b));
    return 0 ;
}
