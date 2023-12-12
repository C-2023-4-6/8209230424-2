#include<iostream>
#include<string>
using namespace std;

void merge(const int a[], int size1, const int b[], int size2,int c[]);
int main()
{
	const int size1 = 10;
	const int size2 = 10;
	const int size3 = size1 + size2;
	cout << " enter a[]: ";
	int a[size1];
	for (int i = 0; i < size1; i++)
	{
		cin >> a[i];	
	}
	cout << " enter b[]: ";
	int b[size2];
	for (int i = 0; i < size2; i++)
	{
		cin >> b[i];
	}
	int c[size3];
	merge(a, size1, b, size2, c);
	cout << endl;
	return 0;
}
void merge(const int a[], int size1, const int b[], int size2, int c[])
{
	int temp;
	for (int j = 0; j < size1; j++)
	{
		c[j] = a[j];
	}
	for (int k = 0; k < size2; k++)
	{
		c[k] = b[k];
	}
	cout << " the merge list is: ";
	for (int m = 0; m < (size1 + size2) - 1; m++)
	{
		for (int n = 0; n < (size1 + size2) - m - 1; n++)
		{
			if (c[n] > c[n + 1])
			{
				temp = c[n];
				c[n] = c[n + 1];
				c[n + 1] = temp;
			}
		}
	}
	for (int i = 1; i < (size1 + size2); i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (c[i] != c[j])
			{
				if(j==i-1)
				{ 
					for (int z = 0; z < (size1 + size2); z++)
					{
						cout << c[z] << " ";
					}
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
}	