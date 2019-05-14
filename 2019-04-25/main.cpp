#include <iostream>
using namespace std;
void meny();
void tack();
void a();
void b();
void c();
void d();
void spoiler();
int main()
{
	meny();
	tack();

return 0;
}
	void meny() {
		char val;
		
		do {
			cout << "Select a, b, c, d. Any charecter to exit" << endl;
			cin >> val;
			switch (val)
			{
				
			case 'a':
			
			a();
			break;
			case 'b':

			b();
			break;
			case 'c':

			c();
			break;
			case 'd':

			d();
			break;
			
			case 's':
			spoiler();
			break;
			
			default:
			return;
			
			}
		} while (true);
}
void a()
{
	cout << "du valde a" << endl;
}
void b()
{
	cout << "du valde b" << endl;
}
void c()
{
	cout << "du valde c" << endl;
}
void d()
{
	cout << "du valde d" << endl;
}
void spoiler()
{
	cout << "Iron man dies lmao and ant man kills thanos LOL" << endl;
}
void tack()
{
	cout << "Tack you för using min program" << endl;
}
