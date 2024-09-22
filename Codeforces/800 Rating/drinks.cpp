/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم,*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, p ;
    cin >> t;
    int flag=0;
    int sum = 0;
    double volume;
    while (t--)
    {
        //sum = 0 ;
        cin >> p;
        sum+=p;
        flag++;
    }

    volume = (double)sum / flag ;

    cout<<setprecision(12)<<fixed<<volume<<endl;

    return 0;
}
