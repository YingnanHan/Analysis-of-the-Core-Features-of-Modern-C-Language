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
	// �ں���ͬ���������������ֿռ�����ֻ����һ������ᵼ�¶����Ա������
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
	Parent::foo(); // Ĭ�ϻ�ֱ�ӵ������������ռ��е�����
	Parent::Child2::foo();
	return 0;
}