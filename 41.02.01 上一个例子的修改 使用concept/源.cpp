#include<iostream>

using namespace std;

template <class C>
concept IntegerType = std::is_integral_v<C>; 
//���൱�ڶ�����һ��ģ������Ӽ���ʹ�ý���������IntegerType
//��һ������ģ�� ������ʲô�������� long ,long long ,int֮��
//����û��ȷ�е�Ҫ��
static_assert(IntegerType<int>); //ʵ����������һ������ֵ
static_assert(IntegerType<long>); //ʵ����������һ������ֵ
// static_assert(IntegerType<double>); //ʵ����������һ������ֵ ���ﲻ����concept��Լ��

template <IntegerType T>
struct X {};

int main()
{

	return 0;
}