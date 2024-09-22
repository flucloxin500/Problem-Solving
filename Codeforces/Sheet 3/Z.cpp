// Bismillahir Rahmanir Rahim

#include <bits/stdc++.h>

using namespace std;
int main()
{

	int element, test;

	cin >> element >> test;

	int binary[element];

	for (int i = 0; i < element; i++)
	{
		cin >> binary[i];
	}

	sort(binary,binary+element);

	while (test--)
	{
		int value;
		cin >> value;

		int left = 0, right = element - 1;

		while (left <= right)
		{
			int middle = (left + right) / 2;

			if (binary[middle] == value)
			{
				cout << "found" << endl;
				break;
			}
			else if (binary[middle] < value)
			{
				left = middle + 1;
			}
			else
			{
				right = middle - 1;
			}
		}

		if (left > right)
		{
			cout << "not found" << endl;
		}
	}

	return 0;
}