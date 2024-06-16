#include <iostream>
#include <limits>
#include <ctype.h>


class MyClass
{
public:
	void memberFunction() { }
};

int main()
{
	std::cout << "Sizes of built-in types:\n";
	std::cout << "\tchar:        " << sizeof(char) << "\n";
	std::cout << "\tbool:        " << sizeof(bool) << "\n";
	std::cout << "\tshort:       " << sizeof(short) << "\n";
	std::cout << "\tint:         " << sizeof(int) << "\n";
	std::cout << "\tlong:        " << sizeof(long) << "\n";
	std::cout << "\tlong long:   " << sizeof(long long) << "\n";
	std::cout << "\tfloat:       " << sizeof(float) << "\n";
	std::cout << "\tdouble:      " << sizeof(double) << "\n";
	std::cout << "\tlong double: " << sizeof(long double) << "\n";
	std::cout << "\twchar_t:     " << sizeof(wchar_t) << "\n";
	std::cout << "\tchar16_t:    " << sizeof(char16_t) << "\n";
	std::cout << "\tchar32_t:    " << sizeof(char32_t) << "\n";
	std::cout << "\tvoid*:       " << sizeof(void*) << "\n";
	std::cout << "\n";

	std::cout << "Sizes of other numeric types:\n";
	std::cout << "\tint8_t:      " << sizeof(int8_t) << "\n";
	std::cout << "\tuint8_t:     " << sizeof(uint8_t) << "\n";
	std::cout << "\tint16_t:     " << sizeof(int16_t) << "\n";
	std::cout << "\tuint16_t:    " << sizeof(uint16_t) << "\n";
	std::cout << "\tint32_t:     " << sizeof(int32_t) << "\n";
	std::cout << "\tuint32_t:    " << sizeof(uint32_t) << "\n";
	std::cout << "\tint64_t:     " << sizeof(int64_t) << "\n";
	std::cout << "\tuint64_t:    " << sizeof(uint64_t) << "\n";
	std::cout << "\tsize_t:      " << sizeof(size_t) << "\n";
	std::cout << "\n";
	
	std::cout << "Size of pointers to different types:\n";
	std::cout << "\tint*:               " << sizeof(int*) << " bytes\n";
	std::cout << "\tfloat*:             " << sizeof(float*) << " bytes\n";
	std::cout << "\tchar*:              " << sizeof(char*) << " bytes\n";
	std::cout << "\tdouble*:            " << sizeof(double*) << " bytes\n";
	std::cout << "\tvoid*:              " << sizeof(void*) << " bytes\n";
	std::cout << "\tint**:              " << sizeof(int**) << " bytes\n";
	std::cout << "\tfloat**:            " << sizeof(float**) << " bytes\n";
	std::cout << "\tvoid(*)(int):       " << sizeof(void(*)(int)) << " bytes\n";
	std::cout << "\tvoid(*)(double):    " << sizeof(void(*)(double)) << " bytes\n";
	std::cout << "\tvoid(MyClass::*)(): " << sizeof(void(MyClass::*)()) << " bytes\n";
	std::cout << "\tptrdiff_t:          " << sizeof(ptrdiff_t) << " bytes\n";
	std::cout << "\n";

	std::cout << "float:\n";
	std::cout << "\tSize:  " << sizeof(float) << " bytes\n";
	std::cout << "\tMin:   " << std::numeric_limits<float>::min() << "\n";
	std::cout << "\tMax:   " << std::numeric_limits<float>::max() << "\n";
	std::cout << "\tigits: " << std::numeric_limits<float>::digits10 << "\n";
	std::cout << "\n";

	std::cout << "double:\n";
	std::cout << "\tSize:   " << sizeof(double) << " bytes\n";
	std::cout << "\tMin:    " << std::numeric_limits<double>::min() << "\n";
	std::cout << "\tMax:    " << std::numeric_limits<double>::max() << "\n";
	std::cout << "\tDigits: " << std::numeric_limits<double>::digits10 << "\n";
	std::cout << "\n";

	std::cout << "long double:\n";
	std::cout << "\tSize:   " << sizeof(long double) << " bytes\n";
	std::cout << "\tMin:    " << std::numeric_limits<long double>::min() << "\n";
	std::cout << "\tMax:    " << std::numeric_limits<long double>::max() << "\n";
	std::cout << "\tDigits: " << std::numeric_limits<long double>::digits10 << "\n";

	return 0;
}
