#include <iostream>
#include <cmath>
using namespace std;
int main () 
{	int A,B,C,D;
	cin>>A>>B>>C>>D;
	if (A>B && B>C && C>D) {cout<<"  ";} 
	else if (A>=B && B>=C && C>=D) {cout<<A;}
	else {cout<<A*A<<endl;
      	      cout<<B*B<<endl;	
              cout<<C*C<<endl;
              cout<<D*D<<endl;}
return 0;}
