#include <stdio.h>

int main (){

int i , count = 0;
double x , avg,sum = 0;

i = 1;
while ( i <= 6)
{
    scanf("%lf",&x);
    if ( x > 0)
    {
        sum = sum + x;

        count++;
    }
    i++;
}

avg = sum/count;
printf("%d valores positivos\n", count);
printf("%.1lf \n", avg);

return 0;
}