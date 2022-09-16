#include<iostream>

using namespace std;

class NonTrival // ����һ����ƽ����
{
private:
	int i;
public:
	NonTrival(int n) : i(n)
	{

	}
	NonTrival()
	{

	}
	int j;
};

class Trival // ����һ��ƽ����
{
private:
	int i;
public:
	Trival(int n) : i(n), j(n)
	{

	}
	Trival() = default; //������������ʽΪĬ�Ϲ��캯���Ĺ��캯������Ϊ������Ĭ�Ϲ��캯��
						//�������Ժ������ͻ��һ����ƽ����ת��Ϊһ��ƽ����
	int j;
};

int main()
{
	Trival a(5);
	Trival b;
	b = a;
	cout << "std::is_trival_v<Trival> = " << std::is_trivial_v<Trival> << endl;
	cout << "std::is_trival_v<NonTrival> = " << std::is_trivial_v<NonTrival> << endl;
	return 0;
}