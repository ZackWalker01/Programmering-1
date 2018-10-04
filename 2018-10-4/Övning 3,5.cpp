#include <iostream>
#include <string>
using namespace std;
int main()
{
cout << "Klockan: (tt:mm) ";
string klockan; 
cin >> klockan;
string tim = klockan.substr(0,2);
string min =klockan.substr(3,2);
cout << "Timmar: " << tim <<endl;
cout << "Minuter: " << min <<endl;


return 0;
}
