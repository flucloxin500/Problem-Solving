/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم,*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a,b,c;
        int x,y,z;
        cin>>a>>b>>c;
        x = abs(a-a)+abs(a-b)+abs(a-c);
        y = abs(b-a)+abs(b-b)+abs(b-c);
        z = abs(c-a)+abs(c-b)+abs(c-c);
        cout<<min(x,min(y,z))<<endl;
    }
    return 0;
}
