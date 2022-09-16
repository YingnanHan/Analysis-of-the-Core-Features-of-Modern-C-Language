// 13.02.01 继承构造函数01.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

using namespace std;

class Base
{
public:
    Base() : x_(0), y_(0.)
    {

    }
    Base(int x, double y) : x_(x), y_(y)
    {

    }
    Base(int x) : x_(x), y_(0.0)
    {
        cout << "Base(int x)" << endl;
    }
    Base(double y) : x_(0), y_(y)
    {
        cout << "Base(double y)" << endl;
    }
private:
    int x_;
    double y_;
};

class Derived : public Base
{
public:
    using Base::Base; // 调用基类构造函数签名
    Derived(int x)
    {
        cout << "Derived(int x)" << endl;
    }
};

int main()
{
    Derived d(5);  // 调用子类构造函数 父类构造函数被覆盖并禁止
    Derived d1(5.5);// 调用父类构造函数 子类没有对应的构造函数
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
