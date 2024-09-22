#include<stdio.h>
#include<math.h>
int  main (){

    int a,b,c ;
    scanf("%d%d%d", &a,&b,&c);

    if( a < b || a == b && a < c || a == c)
    {
        if (b < c || b == c)
        {
            printf("%d\n%d\n%d\n",a,b,c);
        }
        else{
            printf("%d\n%d\n%d\n",a,c,b);
        }
    }
    else if ( b < c || b == c && b < a || b == a)
    {
        if (c < a || c == a)
        {
            printf("%d\n%d\n%d\n",b,c,a);
        }
        else 
        {
            printf("%d\n%d\n%d\n", b,a,c);
        }
    }
    else if ( c < a || c == a && c < b || c == b)
    {
        if (a < b || a == b)
        {
            printf("%d\n%d\n%d\n",c,a,b);
        }
        else 
        {
            printf("%d\n%d\n%d\n", c,b,a);
        }
    }
    printf("\n%d\n%d\n%d\n",a,b,c);
    return 0;
}