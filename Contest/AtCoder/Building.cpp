#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int t;
    int max = -1, pos = 0, st;
    cin >> t;
    int N[t + 5];
    for (int j = 0; j < t; j++)
    {
        cin >> N[j];
        st = N[0];
    }
    for ( int i = 1 ; i < t ; i++)
    {
        if ( N[i] > st)
        {
            pos = i;
            break;
        }
    }
    if ( pos == 0)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<pos+1<<endl;
    }
    return 0;
}