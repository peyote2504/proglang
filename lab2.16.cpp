#include <iostream>
#include <cmath>

using namespace std;


int main () {
   	float X1,X2,Y1,Y2,X,Y,Z;
   	cin >> X1 >> Y1 >> X2 >> Y2;
        X=X2-X1;
	Y=Y2-Y1;
	Z=sqrt(X*X+Y*Y);

	cout << "length = " << Z << endl;
return 0;
}