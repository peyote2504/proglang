#include <iostream>
#include <cmath>
using namespace std;
int main()
{
 double R=20.0;
 double r;
cin>>r;
if (r>20)
{
	double S=3.14*(r*r-R*R);
	cout<<S<<endl;
}
else
{
	cout<<"No answer"<<endl;
} 
return 0;
}
