#include <iostream>
#include <cmath>
using namespace std;
int main (){
	int x,y,z;
	cin>>x>>y>>z;
	if (x>=y && y>=z) {cout<<2*x<<endl<<2*y<<endl<<2*z<<endl;}
	else {cout<<abs(x)<<endl<<abs(y)<<endl<<abs(z)<<endl;}
return 0;}