
/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم,*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int X,P;
    cin>>X>>P;
    double org,frac;
    frac = (double)X / 100 ;
    org = (P/(1-frac));

    cout<<setprecision(2)<<fixed<<org<<endl;
    return 0;
}