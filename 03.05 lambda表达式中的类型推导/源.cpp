#include<iostream>
#include<assert.h>

using namespace std;

int main()
{
	// lambda ���ʽ����ֵ
	auto l = [](auto a1, auto v2)
	{
		return a1 + a1;
	};
	auto retval = l(12, 12);
	cout << retval;

	// lambda ���ʽ��������
	auto ll = [](int& i)->auto& // �Ⱥ�����auto����һ��ռλ��
	{
		return i;
	};
	auto x1 = 5;
	auto& x2 = ll(x1);

	assert(x1 == x2);

	return 0;
}