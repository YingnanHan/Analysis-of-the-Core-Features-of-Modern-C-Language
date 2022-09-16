// 本代码在GCC编译器下可以直接运行
#include<iostream>

struct X
{
	char a1;
	int a2;
	double a3;
};

struct X1
{
	alignas(16) char a1; // 从1字节扩展到16字节
	alignas(double)  int a2; // double占8字节
	double a3; // double占8字节
};

struct alignas(16) X2
{
	char a1;
	int a2;
	double s3;
};

struct alignas(16) X3
{
	alignas(8) char a1;
	alignas(double) int a2;
	double a3;
};

struct alignas(4) X4
{
	alignas(8) char a1;
	alignas(double) int a2;
	double a3;
};

#define COUT_ALIGN(s) std::cout<<"alignof(" #s ") ="  << alignof(s) << std::endl;

int main()
{
	X x;
	X1 x1;
	X2 x2;
	X3 x3;
	X4 x4;
	alignas(4) X3 x5;
	alignas(16) X4 x6;

	COUT_ALIGN(x);
	COUT_ALIGN(x1);
	COUT_ALIGN(x2);
	COUT_ALIGN(x3);
	COUT_ALIGN(x4);
	COUT_ALIGN(x5);
	COUT_ALIGN(x6);
}