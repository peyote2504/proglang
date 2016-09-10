#include <iostream>
#include <cmath>

using namespace std;


int main () {
   	double x,y,z,a,b,c,p,S;
   	cin >> x >> y >>z;
p=(a+b+c)/2;
S=sqrt(p*(p-a)*(p-b)*(p-c));
        x=2*S/a;
	y=2*S/b;
	z=2*S/c;
	cout << "a = " << a << endl; 
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
return 0;
}