#include<iostream>
#include<vector>

using namespace std;

class City
{
private:
	string name;
	vector<string> street_name;
public:

	City(const char* n) :name(n)
	{

	}

	City& operator=(const City& other)
	{
		name = other.name;
		street_name = other.street_name;
		return *this;
	}
};

int main()
{
	City a("wuhan");
//	City b; // ����ʧ�� �Զ��幹�캯��������Ĭ�Ϲ��캯��
//	a = b;
	return 0;
}