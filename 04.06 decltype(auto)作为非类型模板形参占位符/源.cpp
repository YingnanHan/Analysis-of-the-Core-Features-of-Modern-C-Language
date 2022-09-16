#include<iostream>  //��δ���ֻ��C++17�ſ�������

using namespace std;

template<decltype(auto) N> // �ڽ���ģ���Ƶ���ʱ��N������һ������
void f()
{
	cout << N << endl;
}

static const int x = 11;
static int y = 17; 

int main()
{
	f<x>(); // N -> const int
	f<(x)>(); // N -> const int &
	// f<y>(); // N���ǲ���һ���������������
	f<(y)>(); // (y) ���ƶ�Ϊһ���������ͣ����ھ�̬���������ڴ��ַ�ǹ̶��ģ�(y)�ᱻ��Ϊ��һ������

	return 0;
}