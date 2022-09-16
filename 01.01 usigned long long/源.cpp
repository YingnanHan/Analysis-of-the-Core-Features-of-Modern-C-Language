#include<iostream>
#include<limits>
#include<cstdio>

using namespace std;

int main()
{

	// 使用宏方法
	cout << "LLONG_MAX = " << LLONG_MAX << endl;
	cout << "LLONG_MIN = " << LLONG_MIN << endl;
	cout << "ULLONG_MAX = " << ULLONG_MAX << endl;

	// 使用类模板方法
	cout << "std::numeric_limits<long long>::max() = " << std::numeric_limits<long long>::max() << endl;
	cout << "std::numeric_limits<long long>::min() = " << std::numeric_limits<long long>::min() << endl;
	cout << "std::numeric_limits<unsigned long long>::max() = " << std::numeric_limits<unsigned long long>::max() << endl;
	
	// 使用printf打印输出
	std::printf("LLONG_MAX = %lld\n", LLONG_MAX);
	std::printf("LLONG_MIN = %lld\n", LLONG_MIN);
	std::printf("ULLONG_MAX = %lld\n", ULLONG_MAX);

	return 0;
}