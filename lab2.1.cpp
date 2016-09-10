#include <iostream>
#include <cmath>
using namespace std;
int main(){
double a,b,c,S,p,h,V;
cin>>a>>b>>c;
p=(a+b+c)/2;
S=sqrt(p*(p-a)*(p-b)*(p-c));
V=S*h/3;
cout<<V ;
return 0;
}