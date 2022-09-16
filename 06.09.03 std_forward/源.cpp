#include<iostream>
#include<string>

using namespace std;

template<typename T>
void show_type(T t)
{
	cout << typeid(t).name() << endl;
}

//template<typename T>
//void perfect_forward(T&& t)
//{
//	show_type(static_cast<T&&>(t));
//}

template<typename T>
void perfect_forward(T&& t)
{
	show_type(std::forward<T>(t)); // ʹ��Ĭ�ϵ�����ת��
}

string get_string()
{
	return "hi world!";
}

int main()
{
	string s = "hello world";
	perfect_forward(s);// ʹ���������۵�����
	perfect_forward(get_string());
	return 0;
}