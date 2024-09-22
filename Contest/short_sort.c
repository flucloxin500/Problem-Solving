#include<stdio.h>

int  main (){

    int n ;
    string x;

    scanf("%d", &n);

    int i ;

    for ( i = 0 ; i < n ; i++)
    {
        scanf("%s", &x);
        if(x  == "abc")
        {
            printf("YES");
        }
    }
    
    
    return 0 ;
}
