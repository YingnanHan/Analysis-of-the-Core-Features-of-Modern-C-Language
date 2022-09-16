#include<iostream>
#include<string>

using namespace std;

class BaseData
{
	int data_;
public:
	int Get()
	{
		return data_;
	}
protected:
	BaseData() :data_(11)
	{

	}
};

// æ€∫œ¿‡–Õ
class DerivedData : public BaseData
{
public:
};

int main()
{
	DerivedData d{};
	std::cout << d.Get() << std::endl;
	return 0;
}