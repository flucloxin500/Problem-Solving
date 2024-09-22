#include<stdio.h>
#include<math.h>

int main (){

    int n , i ;
    char str[11];
    char in[11] = {"codeforces"};

    scanf("%d", &n);

    for ( i = 0 ; i < n ; i++)
    {
        scanf("%s",  str);

        int  cnt = 0 ;
        
        for ( int j = 0 ; j < 10 ; j++)
        {
            if ( in[j] != str[j])
            {
                cnt++;
            }
        }
        printf("%d\n", cnt);
    }

    


    return 0 ;
}
