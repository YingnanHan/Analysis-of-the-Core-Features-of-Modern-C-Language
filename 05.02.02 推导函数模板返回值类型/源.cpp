#include<iostream>

using namespace std;

template<typename T1, typename T2>
decltype(T1() + T2()) sum(T1 t1, T2 t2) // T1() + T2() ��ʾ�ñ������Զ��Ƶ�T1() + T2()��������ͣ�������T1 T2������Ĭ�Ϲ��캯��
{
	return t1 + t1;
}

int main()
{
	auto x1 = sum(1, 2);
	cout << x1;
	return 0;
}