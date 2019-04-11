#include <iostream>
using namespace std;
int main()
{
	
double pass=0;
double antal=0;
cout << "1. Nollställ antal passagerare." << endl; cout << "2. Öka antalet passagerare med en." << endl; cout << "3. Minska antalet passagerare med en." << endl; cout << "4. Skriv ut antalet passagerare." << endl; cout << "Skriv 9 för att avsluta" << endl;

while (pass<99999999999999999)
{
	cin >> pass; 

if (pass  == 1) {
	
	antal=0;
}
if (pass  == 2) {
	
	antal++;
}
if (pass  == 3) {
	
	antal--;
}
if (pass  == 4) {
	
	cout << "Pass = " << antal << endl;
}
}


return 0;
}
