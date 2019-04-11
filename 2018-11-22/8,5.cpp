#include <iostream>
using namespace std;
int main()
{
int antal;
cout << "Skriv ut antal prickar du vill ha: "; 
cin >> antal;
int prick=0;
cout << "Prickar: " << endl;
while ( prick < antal) 
{
	
cout << '*';
prick++;
}

return 0;
}
