// 03.05 类型转化.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
    
    int a(500);
    unsigned int b(1000); // a-b会转换为unsigned int导致下溢出
    std::cout << a - b << std::endl;
    std::cout << int(a - b) << std::endl; // 将结果强制换为int C++表达方式
    std::cout << float(a - b) << std::endl; // 会导致丢失精度 并且由于float优先级高并且可以容纳下unsigned int 所以这里的结果同上上条目

    long long c(500);
    unsigned int d(1000); 
    std::cout << c - d << std::endl; // 这里不会出错误

    // 现代C++正确的编写方式
    std::cout << "(a-b)=" << static_cast<int>(a - b) << std::endl;
    float e{ 550.0 };
    int f{ static_cast<int>(e) };// 截断转换并初始化
    std::cout << "f=" << f << std::endl;

    // sizeof 运算符
    std::cout << "sizeof long = " << sizeof(long) << std::endl;
    std::cout << "sizeof int = " << sizeof(int) << std::endl;
    std::cout << "sizeof double = " << sizeof(double) << std::endl;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
