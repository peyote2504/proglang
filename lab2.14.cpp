#include <iostream>
#include <cmath>

using namespace std;


int main () {
   	float a,b,c,X,Y,Z;
   	cin >> a >> b >>c;
        X=sqrt(2*(b*b+c*c)-a*a)/2;
	Y=sqrt(2*(a*a+c*c)-b*b)/2;
	Z=sqrt(2*(a*a+b*b)-c*c)/2;

	cout << "m(a) = " << X << endl; 
	cout << "m(b) = " << Y << endl;
	cout << "m(c) = " << Z << endl;
return 0;
}