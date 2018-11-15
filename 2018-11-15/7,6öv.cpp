#include <iostream>
using namespace std;
int main()
{
double cd, rab, summa, total;
cout <<  "Skriv antal skivor: ";
cin >> cd;
if (cd >= 10)
	{ 
		rab = 0.95;
	}
	else if (cd >= 50)
	{
		rab = 0.90;
	}
	else if  (cd >= 200)
	{
		rab = 0.85; 
	}
	else 
	{
		rab = 1; 
	}
summa = cd*9.9;
total = summa*rab; 
cout << "Totala priset: " << total;


return 0;
}
