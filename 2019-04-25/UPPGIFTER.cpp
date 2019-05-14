/*Uppgift 8.3 */

/* #include <iostream>
using namespace std;
void a();
int n=3;
int main()
{

	a();
	



return 0;
}


void a() 
{
		do 
		{
			cout << n << endl;
			cout << endl;
			n++;
			}
			
		while (n<11); {
				
		}
		
	
	return;
}
*/

/* UPPGIFT 8.6 */

/*
 * 
#include <iostream>
using namespace std;
void r();
int main()
{

r();

return 0;
}


void r() 
{
	
	int rad,col;
	
	cout << "Skriv hur många rader och columner du vill ha" << endl;
	cout << "Rader: ";
	cin >> rad ;
	cout << "Columner: ";
	cin >> col;
	
	for (int n=0; n<col; n++) 
	{

		for (int n=0; n<rad; n++) {
			
		cout << '*'; 
		
	}
		cout <<endl;
	
	}

}
*/

/* UPPGIFTER 8.7 */

#include <iostream>
using namespace std;
void val();
void n();
void a();
void s();
void u();
int antal=0;
int main()
{



cout << "Meny" << endl;
cout << "1. Nollställ (n)" << endl;
cout << "2. Addera 1 (a)" << endl;
cout << "3. Subtrahera (s)" << endl;
cout << "4. Skriv ut (u)" << endl;
cout << endl;

val();

return 0;
}

void val()
{
	char val;
	
do{
	cin >> val;	

	switch (val)
		{
			case 'n':
			{
			n();
			break; }
			
			case 'a':
			{
			a();
			break; }
			
			case 's':{
			s();
			break; }
			
			case 'u':{
			u();
			break;}
			
		} 
	} while(true);
}

void n()
{
	antal=0;
	cout << "Antalet är nu noll" << endl;
}

void a()
{
	antal++;
	cout << "Adderar 1" << endl;
}

void s()
{
	antal--;
	cout << "Subtraherar 1" << endl;
}

void u()
{
	cout << "Antalet blir: " << antal << endl;
}
