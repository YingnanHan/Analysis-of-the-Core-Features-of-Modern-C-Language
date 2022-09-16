#include<iostream>
#include<limits>
#include<cstdio>

using namespace std;

int main()
{

	// ʹ�ú귽��
	cout << "LLONG_MAX = " << LLONG_MAX << endl;
	cout << "LLONG_MIN = " << LLONG_MIN << endl;
	cout << "ULLONG_MAX = " << ULLONG_MAX << endl;

	// ʹ����ģ�巽��
	cout << "std::numeric_limits<long long>::max() = " << std::numeric_limits<long long>::max() << endl;
	cout << "std::numeric_limits<long long>::min() = " << std::numeric_limits<long long>::min() << endl;
	cout << "std::numeric_limits<unsigned long long>::max() = " << std::numeric_limits<unsigned long long>::max() << endl;
	
	// ʹ��printf��ӡ���
	std::printf("LLONG_MAX = %lld\n", LLONG_MAX);
	std::printf("LLONG_MIN = %lld\n", LLONG_MIN);
	std::printf("ULLONG_MAX = %lld\n", ULLONG_MAX);

	return 0;
}