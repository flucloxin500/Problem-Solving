#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main () {

    char str[20],str2[20];
    int x;

    scanf("%s",str);
    scanf("%s",str2);
    x = strcmp(str,str2);

    if ( x < 0)
    {
        printf("%s",str);
    }
    else if ( x > 0)
    {
        printf("%s",str2);
    }
    else if (x == 0)
    {
        printf("%s",str);
    }

    return 0 ;
}