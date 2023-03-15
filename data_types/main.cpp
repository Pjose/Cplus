#include <iostream>
#include <string>

using namespace std;

int main() {
	cout << "FUNDAMENTAL DATA TYPES" << endl;
	cout << "======================" << endl;
	cout << "1. Boolean Type" << endl;
	cout << "===============" << endl;
	cout << "bool                  : size = " << sizeof(bool) << " byte"  << endl;
	
	cout << "\n2. Character Types" << endl;
	cout << "==================" << endl;
	cout << "char                  : size = " << sizeof(char) << " byte"  << endl;
//	cout << "char8_t               : size = " << sizeof(char8_t) << " byte"  << endl;
	cout << "wchar_t               : size = " << sizeof(wchar_t) << " bytes"  << endl;
	cout << "char16_t              : size = " << sizeof(char16_t) << " bytes"  << endl;
	cout << "char32_t              : size = " << sizeof(char32_t) << " bytes"  << endl;
	
	cout << "\n3. Integral Types" << endl;
	cout << "=================" << endl;
	cout << "signed char           : size = " << sizeof(signed char) << " byte"  << endl;
	cout << "unsigned char         : size = " << sizeof(unsigned char) << " byte"  << endl;
	cout << "short                 : size = " << sizeof(short) << " bytes"  << endl;
	cout << "short int             : size = " << sizeof(short int) << " bytes"  << endl;
	cout << "signed short          : size = " << sizeof(signed short) << " bytes"  << endl;
	cout << "signed short int      : size = " << sizeof(signed short int) << " bytes"  << endl;
	cout << "unsigned short        : size = " << sizeof(unsigned short) << " bytes"  << endl;
	cout << "unsigned short int    : size = " << sizeof(unsigned short int) << " bytes"  << endl;
	cout << "int                   : size = " << sizeof(int) << " bytes"  << endl;
	cout << "signed                : size = " << sizeof(signed) << " bytes"  << endl;
	cout << "signed int            : size = " << sizeof(signed int) << " bytes"  << endl;
	cout << "unsigned              : size = " << sizeof(unsigned) << " bytes"  << endl;
	cout << "unsigned int          : size = " << sizeof(unsigned int) << " bytes"  << endl;
	cout << "long                  : size = " << sizeof(long) << " bytes"  << endl;
	cout << "long int              : size = " << sizeof(long) << " bytes"  << endl;
	cout << "signed long           : size = " << sizeof(signed long) << " bytes"  << endl;
	cout << "signed long int       : size = " << sizeof(signed long int) << " bytes"  << endl;
	cout << "unsigned long         : size = " << sizeof(unsigned long) << " bytes"  << endl;
	cout << "unsigned long int     : size = " << sizeof(unsigned long int) << " bytes"  << endl;
	cout << "long long             : size = " << sizeof(long long) << " bytes"  << endl;
	cout << "long long int         : size = " << sizeof(long long int) << " bytes"  << endl;
	cout << "signed long long      : size = " << sizeof(signed long long) << " bytes"  << endl;
	cout << "signed long long int  : size = " << sizeof(signed long long int) << " bytes"  << endl;
	cout << "unsigned long long    : size = " << sizeof(unsigned long long) << " bytes"  << endl;
	cout << "unsigned long long int: size = " << sizeof(unsigned long long int) << " bytes"  << endl;
	
	cout << "\n4. Floating-point Types" << endl;
	cout << "=======================" << endl;
	cout << "float                 : size = " << sizeof(float) << " bytes"  << endl;
	cout << "double                : size = " << sizeof(double) << " bytes"  << endl;
	cout << "long double           : size = " << sizeof(long double) << " bytes"  << endl;
	
	cout << "\n5. Other Types on Other Platforms" << endl;
	cout << "===================================" << endl;
	cout << "size_t                : size = " << sizeof(size_t) << " bytes"  << endl;
	cout << "int8_t                : size = " << sizeof(int8_t) << " byte"  << endl;
	cout << "uint8_t               : size = " << sizeof(uint8_t) << " byte"  << endl;
	cout << "int16_t               : size = " << sizeof(int16_t) << " bytes"  << endl;
	cout << "uint16_t              : size = " << sizeof(uint16_t) << " bytes"  << endl;
	cout << "int32_t               : size = " << sizeof(int32_t) << " bytes"  << endl;
	cout << "uint32_t              : size = " << sizeof(uint32_t) << " bytes"  << endl;
	cout << "int64_t               : size = " << sizeof(int64_t) << " bytes"  << endl;
	cout << "uint64_t              : size = " << sizeof(uint64_t) << " bytes"  << endl;

	cout << "void                  : size = " << sizeof(void) << " bytes"  << endl;
	cout << "decltype(nullptr)     : size = " << sizeof(decltype(nullptr)) << " byte"  << endl;
	
	
	// Declaration of variables
	int a;
	float mynumber;
	int x, y, z;
	
	// initialization of variables
	int b = 0;
	int c (0);
	int d {0};
	
	// Type deduction
	int foo = 0;
	auto bar = foo;  // the same as: int bar = foo;
	
	int num1 = 0;
	decltype(num1) num2;  // the same as: int num2;
	
	// String class
	//#include <string>
	string mystring1 = "This is a string";
	string mystring2 ("This is a string");
	string mystring3 {"This is a string"};

	return 0;
}
