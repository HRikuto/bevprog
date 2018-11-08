#include "std_lib_facilities.h"
int main()
try {
/*17.*/ int x = 2000; double c = x; if (c==2000) cout << "Success!\n";
keep_window_open();
return 0;
}
catch (exception& e) {
cerr << "error: " << e.what() << '\n';
keep_window_open();
return 1;
}
catch (...) {
cerr << "Oops: unknown exception!\n";
keep_window_open();
return 2;
}
