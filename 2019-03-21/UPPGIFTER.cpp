#include <iostream>
using namespace std;
double omkrets(double radie);
const double PI = 3.14159;
int main()

{
	double radie;
cin >> radie;

cout << "Omkrets: " << omkrets(radie) << endl;


return 0;
}

double omkrets(double radie) {
	
return 2*PI*radie;
	
}
