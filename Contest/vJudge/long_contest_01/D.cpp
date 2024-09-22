#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int n ;
    cin >> n ;
    char word[110] ;

    int i , x ;

    for ( i = 0 ; i < n ; i++)
    {
        cin>> word ;

        x = strlen(word) ;

        if ( x <= 10)
        {
            cout<<word<<endl;
        }

        else 
        {
            cout<<word[0]<<x-2<<word[x-1]<<endl;
        }
    }
}
