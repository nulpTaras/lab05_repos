// Lab5_5.cpp : 
//

#include <iostream>
using namespace std;

double g(const double a , const double b);

int main()
{
	double a, b;
	cout << "a , b : "; cin >> a >> b;

	double c = ( g(2, a) + pow((1 + pow(g(b, 1), 2)), 3) ) / sqrt( 1 + pow(g(a,b) , 2) );
	cout << "c = " << c << endl;

	return 0;
}

double g(const double a , const double b) {

	return (a * b) / ( pow(a, 2) + pow(b, 2) );

}
