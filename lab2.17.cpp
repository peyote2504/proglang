#include <iostream>
#include <cmath>

using namespace std;


int main () {
   	double x,y,z,a,b;
   	cin >> x >> y >>z;
        a=(sqrt(abs(x-1))-pow(abs(y),1/3))/(1+x*x/2+y*y/4);
	b=x*(atan(z)+pow(M_E , -(x+3)));

	cout << "a = " << a << endl; 
	cout << "b = " << b << endl;
return 0;
}