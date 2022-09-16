#include<iostream>

template<typename T>
struct widget
{
	widget()
	{
		std::cout << "template" << std::endl;
	}
};

// 特化模板
template<>
struct widget<std::nullptr_t>
{
	widget()
	{
		std::cout << "nullptr" << std::endl;
	}
};

template<typename T>
widget<T>* make_widget(T)
{
	return new widget<T>();
}

int main()
{
	auto w1 = make_widget(0);		//调用第一个
	auto w2 = make_widget(nullptr);	//调用第二个
}