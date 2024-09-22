/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم,*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int C, N, X[110];
    cin >> C;
    int i, j;

    for (i = 0; i < C; i++)
    {
        double f = 0;
        double avg, avg2, frosh = 0;
        cin >> N;
        for (j = 0; j < N; j++)
        {
            cin >> X[j];
            frosh += X[j];
        }

        avg = frosh / N;
        for (j = 0; j < N; j++)
        {
            if (X[j] > avg)
            {
                f++;
            }
        }

        avg2 = (f / N)*100;

        cout <<fixed<<setprecision(3)<<avg2<<"%"<<endl;
    }
}
