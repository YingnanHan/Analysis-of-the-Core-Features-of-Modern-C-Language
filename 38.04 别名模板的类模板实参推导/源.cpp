template <class T, class U> struct C {
	C(T, U) {}
};

template<class V>
using A = C<V*, V*>;

int i{};
double d{};
A a1(&i, &i);	// 编译成功，可以推导为A<int>
A a2(i, i);	    // 编译失败，i无法推导为V*
A a3(&i, &d);	// 编译失败，(int *, double *)无法推导为(V*, V*)
