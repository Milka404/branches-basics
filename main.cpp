#include "iostream"
#include "math.h"
using namespace std;

int main()
{
	int b=5, x, i;
	 x=0;
	 for (i=0; i<15; i++)
	 {
	   x+=i;
	cout << x <<"\n";

	 }
	for ( int j=0; j<10; j++)
	{
	   b+=j;
	cout << b<< "\n";
	}

	cout <<x+b<<endl<< "\n";
	return 0;
}
