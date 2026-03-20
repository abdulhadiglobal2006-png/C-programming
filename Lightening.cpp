#include<iostream>
using namespace std;
int main()
{
	int lines, cols;
	cout << "Enter no of Lines: ";
	cin >> lines;
	cout << "Enter no of Lightening pattern in each line: ";
	cin >> cols;
	cout << "Enter size of Each pattern: ";
	int n;
	cin >> n;
	int mid = n / 2;
	cout << endl << endl;
	for (int l = 0; l < lines; ++l)
	{
		for (int i = 0; i < mid; ++i)
		{
			for (int c = 0; c < cols; ++c)
			{
				for (int j = 0; j <= n; ++j)
				{
					if (j == mid - i || (j == mid))
					{
						cout << "*";
					}
					else
					{
						cout << " ";
					}
				}
				cout << " ";
			}	
			cout << endl;
		}
		for (int i = mid; i >= 0; --i)
		{
			for (int c = 0; c < cols; ++c)
			{
				for (int j = 0; j <= n; ++j)
				{
					if (j == mid + i || (i == mid) || j == mid)
					{
						cout << "*";
					}
					else
					{
						cout << " ";
					}
				}
				cout << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
}
