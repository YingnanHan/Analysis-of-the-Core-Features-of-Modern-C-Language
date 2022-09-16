#include<iostream>

using namespace std;

class SomeObj1
{
public:
	void Dump2File()const
	{
		cout << "dump this object to file " << endl;
	}
};

class SomeObj2
{

};

template<typename T>
auto DumpObj(const T& t) -> decltype(((void)t.Dump2File()), void()) // ((void)t.Dump2File()) 用于检验内部函数是否存在 ，右面的才是真正的返回类型
{
	t.Dump2File();
}

void DumpObj(...)
{
std:cout << "the object must have a member function Dump2File" << std::endl;
}

int main()
{
	DumpObj(SomeObj1());
	DumpObj(SomeObj2());
	return 0;
}