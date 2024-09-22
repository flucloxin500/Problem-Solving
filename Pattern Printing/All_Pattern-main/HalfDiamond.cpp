#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int i = 1; i <= 2 * N - 1; i++)
    {
        int star = i;
        if (i > N)
            star = 2 * N - i;
        for (int j = 1; j <= star; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

/*
*
**
***
****
*****
****
***
**
*
*/