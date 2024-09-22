/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم,*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    int input_array[100010];
    int freq_array[100010] = {};
    int i;
    for (i = 0; i < N; i++)
    {
        cin >> input_array[i];
    }
    for (i = 0; i < N; i++)
    {
        freq_array[input_array[i]]++;
    }

    for (i = 1; i <= M; i++)
    {
        cout << freq_array[i] << endl;
    }
}