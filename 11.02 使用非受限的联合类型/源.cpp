#include<iostream>
#include<vector>
#include<string>

using namespace std;

union U
{
	U():x3() // �Է�ƽ������string x3���г�ʼ��
	{
		// ���ڷ�ƽ�������ͳ�Ա�������ṩ���캯��
	}
	~U()
	{
		// ���ڷ�ƽ�������ͳ�Ա�������ṩ��������
		x3.~basic_string(); // ���ö�Ӧ���ַ�����������
	}
	int x1;
	float x2;
	string x3;
	vector<int> x4;
};

int main()
{
	U u;
	u.x3 = "hello world";
	cout << u.x3 << endl;
	return 0;
}