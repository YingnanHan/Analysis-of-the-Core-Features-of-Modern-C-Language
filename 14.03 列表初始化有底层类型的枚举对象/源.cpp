#include<iostream>

using namespace std;

enum class Color //����ǿö������
{
	Red,
	Green,
	Blue
};

int main()
{
	Color c{ 5 }; // C++17 ��׼
	//Color c1 = 5; // ���б��ʼ�� ����
	//Color c2 = { 5 }; // ���б��ʼ�� ����
	//Color c3(0); // ���б��ʼ�� ����

	return 0;
}