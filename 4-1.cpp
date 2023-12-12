#include<iostream>
using namespace std;
int main()
{
	int a[10];
	for (int i = 1; i < 10; i++)
	{
		cin >> a[i];
	}
	for (int i = 1; i < 10; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (a[i]!=a[j])
			{
				if (j == i - 1)
				{
					cout << a[i] << " ";
				}
				else
				{
					continue;
				}
			}
			else
			{
				break;
			}
		}
	}
	return 0;
}