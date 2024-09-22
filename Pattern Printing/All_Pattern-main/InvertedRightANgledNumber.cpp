#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for ( int i = 0 ; i <= t; i++)
    {
        for ( int j = t ; j > i ; j--)
        {
            cout<<j<<" ";
        }

        cout<<endl;
    }
}