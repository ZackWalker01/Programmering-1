#include <iostream>
using namespace std;
int main()
{
double alder;
cout <<  "Ange ålder:"; 
cin >> alder; 
if (alder < 15 || alder > 65)

{
	cout << "Det blir 5 kronor";
}
else 
{
cout << "Det blir 10 kronor";

}




return 0;
}
