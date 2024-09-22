#include <stdio.h>


int main (){

    int n, x , i , f1 = 0 , f2 = 0, cnt1 = 0, cnt2 = 0;

    scanf("%d", &n);

    for ( i = 1 ; i <= n ; i++)
    {
        scanf("%d", &x);

        if ( x >= 10 && x <= 20)
        {
            cnt1++;
            f1 = 1;
        }
        if ( x < 10 || x > 20)
        {
            cnt2++;
            f2 = 1;
        }
        
    }

    if ( f1 == 1)
    {
        printf("%d in\n", cnt1);
    }
    if ( f2 == 1)
    {
        printf("%d out\n", cnt2);
    }
return 0;
}