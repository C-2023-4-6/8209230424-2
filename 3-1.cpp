/*ȡ���Լ��
#include<iostream>
using namespace std;
int ys(int, int);
int main()
{
	int m, n;
	cin >> m >> n;
	cout << "���Լ��Ϊ��" << ys(m, n) << endl;
	return 0;
}
int ys(int x, int y)
{
	int Y;
	for (int i = 1; i <= x && i <= y; i++)
	{
		if (x % i == 0 && y % i == 0)
		{
			Y = i;
		}
	}
	return Y;
}
*/
#include<iostream>
using namespace std;
void ys(int& x, int& y);
void bs(int& x, int& y);
int main()
{
	int m, n;
	cin >> m >> n;
	ys(m, n);
	bs(m, n);
	return 0;
}
void ys(int&x,int&y)
{
	int Y = 0;
	for (int i = 1; i <= x && i <= y; i++)
	{
		if (x % i == 0 && y % i == 0)
		{
			Y = i;
		}
	}
	cout << "���Լ��Ϊ��" << Y << endl;
}
void bs(int& x, int& y)
{
	int B;
	for (int i = 1;; i++)
	{
		if (i % x == 0 && i % y == 0)
		{
			B = i;
			break;
		}
	}
	cout << "��С������Ϊ��" << B << endl;
}