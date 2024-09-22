#include<stdio.h>
#include<math.h>
int main()
{

    int a,b,c;
    scanf("%d%d", &a,&b);
    c = 24;

    if (a < b)
    {
        printf("O JOGO DUROU %d HORA(S)\n", b - a);
    }

    if (a == b)
    {
        printf("O JOGO DUROU %d HORA(S)\n", c);
    }

    if (a > b)
    {
        printf("O JOGO DUROU %d HORA(S)\n", 24-a+b);
    }
    



    return 0;
}