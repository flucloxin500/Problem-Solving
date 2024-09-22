#include<stdio.h>
#include<math.h>

int  main (){

    int x ;
    char ch ,ch2 ;

    scanf("%c", &ch);

    int diff = ch - 'a' ;

    ch2 = 'A' + diff ;

    printf("%c\n", ch2) ;
}