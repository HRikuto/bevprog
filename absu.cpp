#include "std_lib_facilities.h"
int main()
{
	int a;
	int b;
	cout << "Write me two integers for the black magic: \n";
	cin >> a >> b;
	cout << "a=" << a << "\n" << "b=" << b << "\n" << "Black Magic in 0 seconds...\n";
	a = a+b;
	cout << "a=a+b=" << a << "\n";
	b = a-b;
	a = a-b;
	cout << "b=a-b=" << b << "\n" << "a=a-b=" << a << "\n";
		return 0;
	
	
}
