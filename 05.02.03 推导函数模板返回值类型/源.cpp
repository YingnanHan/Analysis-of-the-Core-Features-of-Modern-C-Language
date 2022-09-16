#include<iostream>

using namespace std;

class IntWrap
{
public:
	IntWrap(int n) :n_(n)
	{

	}
	IntWrap operator+ (const IntWrap& other)
	{
		return IntWrap(n_ + other.n_);
	}
	int get()
	{
		return n_;
	}
private:
	int n_;
};

template<typename T1, typename T2>
decltype(*static_cast<T1*>(nullptr) + *static_cast<T2*>(nullptr)) sum3(T1 t1, T2 t2) // 如果类中没有提供默认构造函数的情况
{
	return t1 + t2;
}

int main()
{
	IntWrap obj1 = IntWrap(1);
	IntWrap obj2 = IntWrap(2);
	auto res = sum3(obj1, obj2); // 实际上这里返回的是IntWrap对象
	cout << res.get() << endl;
	return 0;
}