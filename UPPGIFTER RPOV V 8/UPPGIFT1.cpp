#include <iostream>
using namespace std;
int main()
{
	
int r = 82;
int s;
int f=0;

cout << "Gissa ett tal mellan 0 och 100" << endl;
while (s < r || s > r) 
{
cin >> s;
  
if (s < r)  {
	f++;
	cout << "Fel! för litet. Gissa igen:" << endl;
}
else if ( s > r) {
	f++;
	cout << "Fel! För stort. Gissa igen:" << endl;
}
else if ( s = r) {
	f++;
	cout << "Grattis du gissade rätt på försök nr" << f; 
}
}


return 0;
} 
