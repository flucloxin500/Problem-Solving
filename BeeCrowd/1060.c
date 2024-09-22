#include <stdio.h>

int main (){

    double x;
    int i = 1,count;
    count=0;

    while (i <= 6)
    {
        scanf("%lf",&x);
        if(x>0)

        {
           count++;
        }
        i++;
        }
        printf("%d valores positivos\n",count);



return 0;
}