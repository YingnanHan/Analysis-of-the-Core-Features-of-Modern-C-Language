#include<iostream>

using namespace std;

int bar_impl(int x)
{
	return x;
}

auto foo2() -> int(*) (int) // ʹ�ú���ָ�� ��ʾ����һ������ָ�����ͣ������뷵��ֵ���;�Ϊint
// ����ָ���һ��������ʽΪ <����ֵ����>(*<����ָ����>)(<�����б�>) ������ֵ��ʱ��<����ָ����>������
{
	return bar_impl;
}

int main()
{
	auto func = foo2();
	cout << func(50);

	return 0;
}