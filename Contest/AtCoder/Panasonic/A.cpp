/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم,*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int X , Y ;

    cin>>X>>Y ; 

    if ( (X < Y ) && ( Y >= (X+1))&&(Y < (X+3)))
    {
        cout<<"Yes"<<endl;
    }
    else if ( (X < Y ) && ( Y >(X+2)))
    {
        cout<<"No"<<endl;
    }
    else if ( (X > Y ) && ( X >= (Y+1))&&(X <= (Y+3)))
    {
        cout<<"Yes"<<endl;
    }
    else if ( (X > Y ) && ( X  > (Y+3)))
    {
        cout<<"No"<<endl;
    }
}
