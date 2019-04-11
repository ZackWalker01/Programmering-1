#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	setlocale(LC_ALL,"swedish");
	int talfalt[10];
	for (int i=0; i<10; i++)
	{
		cout << "Mata in tal " << i+1 <<  ": ";
		cin >> talfalt[i];	
	}
	
	cout << "Det inmatade talfältet" << endl;
	for (int i=0; i<10; i++)
	{
		cout << talfalt[i] << ' ';
	}
	cout << endl;
	cout << "Med negativa värden, samma absolutbelopp" << endl;
	for (int i=0; i<10; i++)
	{
		if (talfalt[i] > 0)
		    ( talfalt[i] = talfalt[i] * (-1) );
	}
	for (int i=0; i<10; i++)
	{
		cout << talfalt[i] << ' ';   
    }
	

	return 0;
}
