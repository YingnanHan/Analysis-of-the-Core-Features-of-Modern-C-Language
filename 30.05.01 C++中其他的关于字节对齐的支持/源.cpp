// ��������Ҫ��GCCģʽ��ִ��
#include<iostream>

int main()
{
	// 01 ��ѯ�����ֽڽ���
	std::cout << std::alignment_of<int>::value << std::endl;
	std::cout << std::alignment_of<int>() << std::endl; // ���������һ�仰�ȼ�
	std::cout << std::alignment_of<double>::value << std::endl;
	std::cout << std::alignment_of<double>() << std::endl; // ���������һ�仰�ȼ�
	// 02 �ֶ������ڴ��С�����ö����ֽ���
	std::aligned_storage<128, 16>::type buffer1; // ����һ��128�ֽڵ�buffer 16�ֽڶ���
	std::cout << sizeof(buffer1) << std::endl;
	std::cout << alignof(buffer1) << std::endl;
	// 03 ���벻�������Ĳ�������ȡ������ͳ�����Ϊ���볤��
	std::aligned_union<128, double , int, char>::type buffer2;
	std::cout << sizeof(buffer2) << std::endl;
	std::cout << alignof(buffer2) << std::endl;
}
