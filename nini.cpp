#include <iostream>
using namespace std;

main ()
{
int x=0,b,i;
cout<<"Ведите значение \n";
cin>>b;
for (i=0; i<10; i++)
{
x+=i;
b+=x;
}
cout<< b<< "\n";

}

