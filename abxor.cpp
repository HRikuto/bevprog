#include "std_lib_facilities.h"

int main()
{	cout << "Write me two integer for the black magic: \n";
	int a;
	int b;
	cin >> a >> b;
	cout << "a=" << a << "\n" << "b=" << b << "\n"<< "Black Magic in 0 seconds...\n";
	a=a xor b;
	cout << "I don't really know how it works...\n";
	b=a xor b;
	a=a xor b;
	cout << "b=" << b << "\n" << "a=" << a << "\n";
		return 0;
}
