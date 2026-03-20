#include<iostream>
using namespace std; 
int main()
{
	int row, col;
	int size,n, mid;
	cout << "Enter no of lines: ";
	cin >> row;
	cout << "Enter no of patterns per coloumn: ";
	cin >> col;
	cout << "Enter size of each pattern: ";
	cin >> size;
	n = size * 2 + 1;
	mid = n / 2;
	cout << endl << endl;
	for (int l = 0; l < row; ++l)
	{
		for (int i = 0; i <= mid; ++i)
		{
			for (int c = 0; c < col; ++c)
			{
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
			}
			cout << endl;
		}
		for (int i = mid; i > 0; --i)
		{
			for (int c = 0; c < col; ++c)
			{
				for (int j = 0; j < n; ++j)
				{
					if (i == mid - j + 1 || j == mid + i - 1)
					{
						cout << "*";
					}
					else
					{
						cout << " ";
					}
				}
			}
			cout << endl;
		}
	}
}
