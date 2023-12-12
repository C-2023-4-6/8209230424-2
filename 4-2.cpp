/*
#include<iostream>
using namespace std;
void bubblesort(double a[10])//bubblesort √∞≈›≈≈–Ú
{
	double temp;
	bool charged = true;
	do
	{
		charged = false;
		for (int j = 0; j < 9; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
				charged = true;
			}
		}
	} while (charged == true);
}
int main()
{
	double a[10]{};
	for (int i = 1; i < 10; i++)
	{
		cin >> a[i];
	}
	bubblesort(a);
	for (int k = 0; k < 10; k++)
		cout << a[k] << " ";
	cout << endl;
	return 0;
}*/
#include<iostream>
using namespace std;
void bubblesort(double a[10])//bubblesort √∞≈›≈≈–Ú
{
	double temp;
	for(int i = 0;i < 9;i++)
	{ 
		for (int j = 0; j < 9 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}
int main()
{
	double a[10]{};
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	bubblesort(a);
	for (int k = 0; k < 10; k++)
		cout << a[k] << " ";
	return 0;
}