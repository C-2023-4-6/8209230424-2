#include<iostream>
#include<iomanip>
using namespace std;
bool is_prime(int num);
int main()
{
	int n = 0;
	for (int i = 2;; i++)
	{
		if (is_prime(i))//循环每个i，i一定是符合下面is_prime的函数
		{
			cout << setw(5) << i << " ";//调整每个宽度，增加一个空格
			n++;
			if (n > 0 && n % 10 == 0)//每十个换行
			{
				cout << endl;
			}
			if (n == 200)
			{
				break;
			}
		}
	}
	return 0;
}
bool is_prime(int num)
{
	int m;
	bool prime = true;
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			prime = false;//false就直接break
			break;
		}
	}
	return prime;
}