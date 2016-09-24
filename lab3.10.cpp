#include <iostream>
using namespace std;
int main () {
	int x,y,R;
	cin>>x>>y>>R;
	if (x*x+y*y<= R*R) {cout<<"inside";}
	else {cout<<"outside";}
return 0;}