#include<stdio.h>
#include<math.h>

int main()
{
    int x,y,z,a;
    // x = pappa 
    // y = mumma
    // z = watch
    
    
    scanf("%d %d %d", &x,&y,&z);

    a = y + z;

    if ( x > z && y == 0)
    {
        printf("Onek Happy\n");
    }
    else if (x >= a)
    {
        printf("Happy\n");
    }
    else if (x <= a && y != x)
    {
        printf("Sad\n");
    }
    else if (x == y && z > 0 )
    {
        printf("Onek Sad\n");
    }
    
    return 0;
}