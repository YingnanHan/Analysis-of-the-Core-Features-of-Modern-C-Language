#include<iostream>

using namespace std;

int&& f()
{
	int i = 0;
	int k = 9;
	int sum = i + k;
	return static_cast<int &&>(sum); // ǿ�ƽ�һ����ֵ����ת��Ϊ����ֵ����
}

int main()
{

	int i=0;
	int&& f();
	auto xla = i;
	cout << typeid(xla).name() << endl;
	decltype(auto) x1d = i; // decltype(auto) �����Ƶ������Խ��ָ������
	cout << typeid(x1d).name() << endl;
	decltype(auto) x2d = (i); // decltype(auto) �����Ƶ������Խ��ָ������
	cout << typeid(x2d).name() << endl;
	auto x3a = f();	//�������ֵ���ûᱻת��������
	cout << typeid(x3a).name() << endl;
	decltype(auto) x3d = f(); // x3d�ᱻ�Ƶ�Ϊ��ֵ����
	// cout << typeid(x3d) << endl;
	auto x4a = { 1,2 }; // ����ᱻ�Ƶ�Ϊstd::initializer_list<int>
	// cout << typeid(x4a) << endl;
	// decltype auto x4d = { 1,2 }; // ����ʧ�� {1,2}���ǵ�ֵ
	auto* x5a = &i;//x5a���Ƶ�Ϊint * autoΪint
	// decltype(auto)* x5d = &i; //����ʧ�� delctype���뵥������

	return 0;
}