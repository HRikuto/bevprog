#include "std_lib_facilities.h"

int main()
{	cout << "Write me one integer for the black magic: \n";
	int a;
	cin >> a;
	int x=0;

	while (a!=0)
	{ 
		a<<=1;
  		x++;

	}
	cout << x << "\n";
}
