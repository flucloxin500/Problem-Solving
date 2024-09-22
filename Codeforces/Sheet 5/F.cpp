                                    /*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم,*/
#include<bits/stdc++.h>
using namespace std;

long long EQAUTION (long long a , long long b)
{
    long long O = -1 ;
    for ( long long i = 0 ; i <= b ; i+=2)
    {
        O += pow(a,i);
    }
    return O ;
}

int main ()
{
    long long x , y ;
    cin>>x>>y ;
    long long equat = EQAUTION(x,y);
    cout<<equat<<endl;
    return 0;

}
