#include<iostream>

using namespace std;

class NonCopyable
{
public:
	NonCopyable() = default;	// ��ʽ���Ĭ�Ϲ��캯��
	NonCopyable(const NonCopyable&) = delete;	// ��ʾɾ�����ƹ��캯��
	NonCopyable& operator=(const NonCopyable&) = delete;	// ��ʾɾ�����Ƹ�ֵ
};

int main()
{
	NonCopyable a, b;
	// a = b;// �ᱨ��
	return 0;
}