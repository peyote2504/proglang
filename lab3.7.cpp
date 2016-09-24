#include <iostream>
using namespace std;	
	int main () {
	double x,y;
	cin>>x>>y;
	if(x<y) {y=2*x*y; cout<<y; x=(x+y)/2.0;}
	else {x=2*x*y; cout<<x; y=(x+y)/2.0;} 
	cout<<x<<" "<<y;
return 0;}