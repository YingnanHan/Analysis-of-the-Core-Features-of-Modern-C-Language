#include<iostream>

using namespace std;

template<typename ...Args>
auto sum(Args ...args)
{
	return (args + ...); // ...��һ���۵����� ��Ϊ��������ȼ�������������Ҫ��������
}

int main()
{
	cout << sum(1, 2, 3, 4, 5, 6, 7, 8) << endl;
	return 0;
}