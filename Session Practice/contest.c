#include<stdio.h>
#include<math.h>

int main()
{
    int x,y,z,a,b,c,n,i=1;
    
    
    scanf("%d", &n);

    while ( i<=n)
    {
    scanf ("%d %d %d", &x,&y,&z);
    scanf ("%d %d %d", &a,&b,&c);
    
    if ( x == a && y == b && z == c)
    {
        printf("Twin\n");
    }
    else if ( x <= a && y <= b && z <= c)
    {
        printf ("Alice\n");
    }
    else if ( a <= x && b <= y && c <= z)
    {
        printf("Vasya\n");
    }

    i++;


    }
    

    
    
    return 0;
}