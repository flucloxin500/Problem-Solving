#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char arr[110] , place[110];
    cin>>arr;
    int i , x ;
    x = strlen(arr);

    for ( i = 0 ; i < x ; i++)
    {
        if ( arr[i] == 'A' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u' )
        {
            place[i] = arr[i] ;
        }

        cout<<place[i];
    }

    
}


