                                    /*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم,*/
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    char rob[260] , bor[260];

    cin>>rob;
    int x; 
    x = strlen(rob);
    int i ;

    for ( i = 0 ; i < x-1 ; i++)
    {
        if ( rob[i] != rob[i+1])
        {
            bor[i] = rob[i];
        }
    }

    cout<<bor;


}
