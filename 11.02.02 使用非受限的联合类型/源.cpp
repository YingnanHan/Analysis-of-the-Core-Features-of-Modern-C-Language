#include<iostream>
#include<string>
#include<vector>

using namespace std;

union U
{
	U()
	{

	}
	~U()
	{

	}
	int x1;
	float x2;
	string x3;
	vector<int> x4;
};

int main()
{
	U u;
	// Ϊ��ȷ������� ����ʹ����placement new�ļ�������ʼ����ƽ�����͵Ķ���
	new(&u.x3) string("hello world");
	cout << u.x3 << endl;
	u.x3.~basic_string();
	//
	new(&u.x4) vector<int>; // ���ո�������vector��������ڴ�
	u.x4.push_back(58); // ��������
	cout << u.x4[0] << endl;
	u.x4.~vector(); //���ٶ���

	return 0;
}