#include<stdio.h>
#include <math.h>
int  main (){

    double n;
    int n100, n50, n20, n10, n5, n2,n1,c1,c0_50,c0_25,c0_10,c0_05,c0_01;
    scanf("%lf",&n);
    n100 = n/100;
    n = fmod(n,100);
    n50 = n/50;
    n = fmod(n,50);
    n20 = n/20;
    n = fmod(n,20);
    n10 = n/10;
    n = fmod(n,10);
    n5 = n/5;
    n = fmod(n,5);
    n2 = n/2;
    n = fmod(n,2);
    c1 = n/1;
    n = fmod(n,1);
    c0_50 = n/0.50;
    n = fmod(n,0.50);
    c0_25 = n/0.25;
    n = fmod(n,0.25);
    c0_10 = n/0.10;
    n = fmod(n,0.10);
    c0_05 = n/0.05;
    n = fmod(n,0.05);
    c0_01 = n/0.01;
    n = fmod(n,0.01);
    
    printf("NOTAS:\n");
    printf("%d  nota(s) de R$ 100.00\n", n100);
    printf("%d  nota(s) de R$ 50.00\n", n50);
    printf("%d  nota(s) de R$ 20.00\n", n20);
    printf("%d  nota(s) de R$ 10.00\n", n10);
    printf("%d  nota(s) de R$ 5.00\n", n5);
    printf("%d  nota(s) de R$ 2.00\n", n2);
    printf("MOEDAS:\n");
    printf("%d  moeda(s) de R$ 1.00\n", c1);
    printf("%d  moeda(s) de R$ 0.50\n", c0_50);
    printf("%d  moeda(s) de R$ 0.25\n", c0_25);
    printf("%d  moeda(s) de R$ 0.10\n", c0_10);
    printf("%d  moeda(s) de R$ 0.05\n", c0_05);
    printf("%d  moeda(s) de R$ 0.01\n", c0_01);
    
    
    return 0;
}