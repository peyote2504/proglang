#include <iostream>
#include <cmath>

using namespace std;


int main () {
   	double a,b,c,X,Y,Z;
   	cin >> a >> b >> c ;
        X=(sqrt(b*c*((b+c)*(b+c)-a*a)))/(b+c);
	Y=(sqrt(a*c*((a+c)*(a+c)-b*b)))/(a+c);
	Z=(sqrt(b*a*((b+a)*(b+a)-c*c)))/(b+a);

	cout << "l(a) = " << X << endl; 
	cout << "l(b) = " << Y << endl;
	cout << "l(c) = " << Z << endl;
return 0;
}