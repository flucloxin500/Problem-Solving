#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s1[21], s2[11], s3[11], t;
    scanf("%s%s", s1, s2);
    printf("%d %d\n", strlen(s1), strlen(s2));
    strcpy(s3, s1);
    strcat(s1, s2);
    printf("%s\n", s1);

    t = s3[0];
    s3[0] = s2[0];
    s2[0] = t;
    printf("%s %s\n", s3, s2);

    return 0;
}