#include <iostream>
#include <cmath>

using namespace std;


int main () {
   	double x,y,z,a,b;
   	cin >> x >> y >>z;
        a=2*cos(x-M_PI/6)/(1/2+pow(sin(y), 2));
	b=1+z*z/(3+z*z/5);

	cout << "a = " << a << endl; 
	cout << "b = " << b << endl;
return 0;
}