#include <iostream>
using namespace std;
int main()
{
float tal1, tal2;
cout << "Mata in två tal\n";
cout << "tal 1:";
cin >> tal1;
cout << "tal 2:";
cin >> tal2;

if ( tal1 > tal2) {
	cout << "True!" << endl;
	
}
else if ( tal1 == tal2) {
	cout << "De är lika stora" << endl; 
	
}
else {
	cout << "tal2 är störst" << endl; 
	
}




return 0;
}
