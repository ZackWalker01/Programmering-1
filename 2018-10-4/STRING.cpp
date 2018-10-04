#include <iostream>
#include <string>
using namespace std;
int main()
{
string s, s1;
s = "Hej Kalle!"; 
s1 = " x";
string str = s+s1;
cout << str << endl;
int posistion= s.find('!',0);
cout << posistion << endl;

return 0;
}
