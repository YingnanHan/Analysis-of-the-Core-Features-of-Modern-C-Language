#include<iostream>

using namespace std;

namespace Parent
{
	namespace Child1
	{
		void foo()
		{
			cout << "Child1::foo()" << endl;
		}
	}
	// 内含有同名函数的内联名字空间有且只能有一个否则会导致二义性编译错误
	inline namespace Child2
	{
		void foo()
		{
			cout << "Child2::foo()" << endl;
		}
	}
}

int main()
{
	Parent::foo(); // 默认会直接调用内联命名空间中的内容
	Parent::Child2::foo();
	return 0;
}