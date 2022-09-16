// 本代码需要在GCC模式下执行
#include<iostream>

int main()
{
	// 01 查询对其字节结束
	std::cout << std::alignment_of<int>::value << std::endl;
	std::cout << std::alignment_of<int>() << std::endl; // 与上面的那一句话等价
	std::cout << std::alignment_of<double>::value << std::endl;
	std::cout << std::alignment_of<double>() << std::endl; // 与上面的那一句话等价
	// 02 手动分配内存大小并设置对其字节数
	std::aligned_storage<128, 16>::type buffer1; // 定义一个128字节的buffer 16字节对齐
	std::cout << sizeof(buffer1) << std::endl;
	std::cout << alignof(buffer1) << std::endl;
	// 03 传入不定数量的参数，并取最长的类型长度作为对齐长度
	std::aligned_union<128, double , int, char>::type buffer2;
	std::cout << sizeof(buffer2) << std::endl;
	std::cout << alignof(buffer2) << std::endl;
}
