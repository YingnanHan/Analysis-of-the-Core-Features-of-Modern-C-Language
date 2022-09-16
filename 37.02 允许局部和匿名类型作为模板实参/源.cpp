template <class T> class X { };
template <class T> void f(T t) { }
struct {} unnamed_obj;

int main()
{
	struct A { };
	enum { e1 };
	typedef struct {} B;
	B b;
	X<A>  x1;		// C++11±‡“Î≥…π¶£¨C++03±‡“Î ß∞‹
	X<A*> x2;		// C++11±‡“Î≥…π¶£¨C++03±‡“Î ß∞‹
	X<B>  x3;		// C++11±‡“Î≥…π¶£¨C++03±‡“Î ß∞‹
	f(e1);			// C++11±‡“Î≥…π¶£¨C++03±‡“Î ß∞‹
	f(unnamed_obj); // C++11±‡“Î≥…π¶£¨C++03±‡“Î ß∞‹
	f(b);			// C++11±‡“Î≥…π¶£¨C++03±‡“Î ß∞‹
}
