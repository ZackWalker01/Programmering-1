#include <iostream>
using namespace std;
int main()
{
double hop;
double vind;
cout <<  "Ange vindstyrka (x m/s):"; 
cin >> vind;
if (vind >= 2)
{
 cout << "för hög vindstyrka att slå rekord";
	
}
else
{
	cout << "Ange hopp distans:"; 
	cin >> hop;
	if (hop > 7.92) 
	{
		cout << "Grattis! Du har slått rekord!";
     }
	else
	{
		cout << "Du suger!";
	}
	
}




return 0;
}
