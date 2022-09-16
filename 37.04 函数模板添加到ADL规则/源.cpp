void g() {}
namespace N {
	struct A {};
	template <class T> int f(T) { return 1; }
	template <class T> int g(T) { return 2; }
	template <class T> int h(T) { return 3; }
}

void main()
{
	int h = 0;
	// N::A() 作为一个对象，当做参数传给f
	int x = f<N::A>(N::A());  // 编译成功，查找f没有找到任何定义，f被认为是模板
	int y = g<N::A>(N::A());  // 编译成功，查找g找到一个函数，g被认为是模板
	// int z = h<N::A>(N::A());  // 编译失败， 编译器按照从上到下的顺序会认为h是一个整型变量

}

