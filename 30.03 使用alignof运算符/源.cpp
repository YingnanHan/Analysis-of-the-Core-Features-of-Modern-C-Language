#include<iostream>

using namespace std;

int main()
{
	// alignof��������ڻ����������볤�ȣ����ǣ��������Ի��ʹ��alignas�޸Ĺ��Ķ��볤��
	// �����Ҫ���ʹ��alignas�޸Ĺ��Ķ��볤�ȣ�Ҫ����MSVC�е�__alignof
	auto x1 = alignof(int);
	auto x2 = alignof(void(*)());
	// C++ ��֧�������÷�
	int a = 0;
	// auto x3 = alignof(a); // ��֧��
	auto x3 = __alignof(a);  // ֧��
	// ֻ����Ĭ�϶��������£����������������
	auto x4 = alignof(decltype(a));
	return 0;
}