template <class T>
struct S {
	T x;
	T y;
};

template <class T, class U>
struct X {
	S<T> s;
	U u;
	T t;
};

int main()
{
	X x{ {1, 2}, 3u, 4 };
}

