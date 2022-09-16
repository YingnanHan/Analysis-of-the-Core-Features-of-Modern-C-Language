// 13.02.02 派生类继承多个签名相同的构造函数会导致编译失败.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

using namespace std;

class Base1
{
public:
    Base1(int)
    {
        cout << "Base1(int x)" << endl;
    }
};

class Base2
{
public:
    Base2(int)
    {
        cout << "Base2(int x)" << endl;
    }
};

class Derived : public Base1 ,Base2
{
public:
    using Base1::Base1; // 调用基类构造函数签名
    using Base2::Base2; // 调用基类构造函数签名
};

int main()
{
    // Derived d(5);  // 这样做会导致编译器不知道该调用哪一个父类下的构造函数，从而编译出错
    return 0;
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

