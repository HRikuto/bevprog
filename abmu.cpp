#include "std_lib_facilities.h"

int main()
{	cout << "Write me two integer for the black magic: \n";
	int a;
	int b;
	cin >> a >> b;
	cout << "a=" << a << "\n" << "b=" << b << "\n"<< "Black Magic in 0 seconds...\n";
	a=a*b;
	cout << "a=a*b=" << a << "\n";
	b=a/b;
	a=a/b;
	cout << "b=a/b=" << b << "\n" << "a=b/a=" << a << "\n";
		return 0;
}
