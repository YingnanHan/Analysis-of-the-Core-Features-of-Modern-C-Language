#include<iostream>

using namespace std;

struct type
{
	void* operator new (std::size_t) = delete;
};

type gloabl_var;

int main()
{
	static type static_var;	// �����ھ�̬�洢��
	type auto_var;			// ������ջ
	//type* var = new type(); // �����ڶ� ʧ��
	return 0;
}