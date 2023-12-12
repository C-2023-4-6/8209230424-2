#include<iostream>
using namespace std;
int main()
{
	int a=1, n=0;
	for (int i = 1; i < 10; i++)
	{
		a = (a + 1) * 2;
		n++;
	}
	cout << a;
	return 0;
}