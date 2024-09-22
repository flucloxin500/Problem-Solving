                                    /*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم,*/
#include<bits/stdc++.h>
using namespace std;

int main () {

    long long N ;
    cin >> N ;
    int cnt = 1 ;

    int i ;

    while (N != 1)
    {
        if ( N % 2 != 0)
        {
            cnt = 0 ;
            break;
        }
        N /= 2 ;
    }

    if ( cnt == 1 )
    {
        cout<<"YES"<<endl;
    }
    else 
    {
        cout<<"NO"<<endl;
    }
    
}