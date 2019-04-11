#include <iostream>
#include <time.h> // För tiden
#include <cstdlib> // För slumpen
using namespace std;
int main()
{
cout << RAND_MAX << endl; // Största möjliga slumptal
srand(time(NULL)); //initierar ett startvärde för slumpen.
// Resten vid division med 6 blir alltid
// ett heltal mellan 0 och 5
// Adderar du med ett får du ett tal
// mellan 1 och 6
// Simulering av tärningskast
cout << (rand() % 6)+1 << endl;
return 0;
}
