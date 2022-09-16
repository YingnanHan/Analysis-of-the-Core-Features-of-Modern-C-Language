template <typename T> 
struct A
{

};

template <template <typename> class T> 
struct B 
{

};

int main()
{
	B<A> ba;
}
