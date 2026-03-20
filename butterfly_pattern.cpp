#include<iostream>
using namespace std;
int main()
{
	int size, n, m;
	cin >> size;
	n = size * 2;
	int mid = n / 2;
	for (int i = 0; i < mid; ++i)
	{
		for (int j = 0; j < n ; ++j)
		{
			if (j == mid - i || j == mid + i)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		for (int j = 0; j < n; ++j)
		{
			if (j == mid - i || j == mid + i)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	for (int i = mid-1; i >= 0; --i)
	{
		for (int j = 0; j <n; ++j)
		{
			if (j == mid - i || j == mid + i)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		for (int j = 0; j < n; ++j)
		{
			if (j == mid - i || j == mid + i)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
