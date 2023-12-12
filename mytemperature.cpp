#include<iostream>
using namespace std;
double celsius_to_fah(double cel)
{
	double n;
	n = (cel * 1.8) + 32;
	return n;
}
double fahrenheit_to_cels(double fah)
{
	double m;
	m = (fah - 32) / 1.8;
	return m;
}