#include <iostream>
#include <cmath>
using namespace std;
int main(){
int r,R,h;
double S,l,V;
cin>>r>>R>>h;
l=sqrt(h*h+(R-r)*(R-r));
S=(M_PI*l*(R+r))+(M_PI*(R*R+r*r));
V=M_PI*h/3*(R*R+r*r+R*r);
cout<<"S="<<S<<endl ;
cout<<"V="<<V<<endl;
return 0;
}