/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم,*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> X(n);
    int i;
    for (i = 0; i < n; i++)
    {
        cin >> X[i];
    }
    int Ser = 0, Dim = 0, move = 1;
    while (!X.empty())
    {
        if (move == 1)
        {
            if (X[0] > X.back())
            {
                Ser += X[0];
                X.erase(X.begin());
            }
            else
            {
                Ser += X.back();
                X.pop_back();
            }
            move = 2;
        }
        else
        {
            if (X[0] > X.back())
            {
                Dim += X[0];
                X.erase(X.begin());
            }
            else
            {
                Dim += X.back();
                X.pop_back();
            }
            move = 1;
        }
    }
    cout << Ser << " " << Dim;
}