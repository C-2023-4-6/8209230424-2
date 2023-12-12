#include<iostream>
#include"mytemperature.h"
using namespace std;
int main()
{
	double cel, fah;
	cout << "Celsius Fahrenheit:";
	cin >> cel;
	printf("%.1f %.1f\n", cel, celsius_to_fah(cel));
	cout << "Fahrenheit Celsius:";
	cin >> fah;
	printf("%.1f %.2f\n", fah, fahrenheit_to_cels(fah));
	return 0;
}