#include<iostream>

using namespace std;

bool foo()
{
	return false;
}

bool bar()
{
	return true;
}


int main()
{ // if����ڲ�����ı�����������Ϊif�µ����з�֧��Ҳ���ᴩ����if�ṹ
	if (bool b = foo(); b)
	{
		cout << boolalpha << " foo() = " << b << std::endl;
	}
	else if(bool b1 = bar(); b1)
	{
		cout << boolalpha << " foo() = " << b << " bar() = " << b1 << std::endl;
	}
}