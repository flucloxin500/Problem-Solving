#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int t = 1, n, p1, p2, i, c, temp;
    while (cin >> s)
    {
        if (s == "\n")
        {
            break;
        }
        cin >> n;
        cout << "Case " << t<< ":\n";
        t++;
        while (n--)
        {
            cin >> p1 >> p2;
            if(p1 == p2)
            {
                cout<<"Yes"<<endl;
                continue;
            }
            if (p1 > p2)
            {
                temp = p1;
                p1 = p2;
                p2 = temp;
            }
            for (i = p1; i < p2; i++)
            {
                if (s[i] == s[i + 1])
                {
                    c = 1;
                }
                else
                {
                    c = 0;
                    break;
                }
            }
            if (c == 1)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
}