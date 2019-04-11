#include <iostream>
using namespace std;
int main()
{
int antal;
int rad;
cout << "Skriv ut antal prickar du vill ha: "; 
cin >> antal;
cout << "Skriv ut antal rader du vill ha: "; 
cin >> rad; 
int prick=0;
int q=0;
cout << "Prickar: " << endl;
while (q<rad)
{
	cout << endl;
	
		while ( prick < antal)
		{
		
		cout << '*';
		prick++; 
		
		
		}
		prick=0;
		q++;
	
}

return 0;
}
