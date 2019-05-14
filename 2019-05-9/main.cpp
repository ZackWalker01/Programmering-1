#include <iostream>
using namespace std;
void val();
void f();
void c();
int main()
{

val();

return 0;
}

void val() {
	char val;
	int x=1;
	
	do{
		
		cout << "Meny" << endl;
		cout << "Omvandla från Celsius till Fahrenheit (f)" << endl;
		cout << "Omvandla från Fahrenheit till Celsius (c)" << endl;
		cout << "Avsluta (a)" << endl;
		cout << endl;
	
		cout << "Ditt val: ";
			cin >> val;
			
			
			switch (val)
			{
				case 'f':
				{
				f();
				break; }
			
				case 'c':
				{
				c();
				break; }
				default:
				x=0;
				break;
			}
	}while (x==1);
} 

void f() 
{
double fah;
double cel;
	
	cout << endl;
	cout << "Ange tempraturen i Fahrenheit: ";
	cin >> fah; 
	cel = (fah - 32)/1.8;
	cout << "Detta motsvaras av " << cel << " Celsius" << endl;
	cout << endl;
	val();
	
}

void c() 
{
double fah;
double cel;

	cout << endl;
	cout << "Ange tempraturen i Celsius: ";
	cin >> cel; 
	fah = (cel*1.8)+32;
	cout << "Detta motsvaras av " << fah << " Fahrenheit" << endl;
	cout << endl;
	
	
}


	
	
	
	
	
 
