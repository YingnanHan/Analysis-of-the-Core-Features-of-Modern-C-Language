#include<iostream>

using namespace std;

struct type
{
	~type() = delete;
};

type global_var;			// ����ʧ�ܣ� ����������ɾ���޷���ʽ����

int main()
{
	static type static_var;// ����ʧ�ܣ� ����������ɾ���޷���ʽ����
	type auto_var;		   // ����ʧ�ܣ� ����������ɾ���޷���ʽ����
	type* varptr = new type;// ����ʧ�ܣ� ����������ɾ���޷���ʽ����
	delete varptr;			// ����ʧ�ܣ� ����������ɾ���޷���ʽ����

	return 0;
}