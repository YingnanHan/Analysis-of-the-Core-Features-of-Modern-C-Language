#include <atomic>

template<class T, class Arg>
T create(Arg&& arg)
{
	return T(std::forward<Arg>(arg));
}

int main()
{
	std::atomic<int> x = create<std::atomic<int>>(11);
}
