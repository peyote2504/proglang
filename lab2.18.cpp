#include <iostream>
#include <cmath>

using namespace std;


int main () {
   	double x,y,z,a,b;
   	cin >> x >> y >>z;
        a=(1+y)*(x+y/(x*x+4))/(pow(M_E , -x-2)+1/(x*x+4));
	b=(1+cos(y-2))/(x*x*x*x/2+sin(z)*sin(z));

	cout << "a = " << a << endl; 
	cout << "b = " << b << endl;
return 0;
}
