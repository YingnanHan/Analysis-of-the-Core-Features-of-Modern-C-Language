template<int ...Args>
void foo1() {};

template<int ...Args>
class bar1 {};

int main()
{
	foo1<1, 2, 5, 7, 11>();
	bar1<1, 5, 8> b;
}
