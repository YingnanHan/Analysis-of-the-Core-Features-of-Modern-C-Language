template <int I> 
struct X 
{

};

char foo(int);
char foo(float);

template <class T> 
X<sizeof(foo((T)0))> f(T)
{
	return X<sizeof(foo((T)0))>();
}

int main()
{
	f(1);
}
