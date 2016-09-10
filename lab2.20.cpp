
#include <iostream>
#include <cmath>

using namespace std;


int main () {
   	double x,y,z,a,b;
   	cin >> x >> y >>z;
        a=(1+sin(x+y)*sin(x+y))/(2+abs(x-2*x/(1+x*x*y*y)))+x;
	b=pow(cos(atan(1/z)), 2 );

	cout << "a = " << a << endl; 
	cout << "b = " << b << endl;
return 0;
}