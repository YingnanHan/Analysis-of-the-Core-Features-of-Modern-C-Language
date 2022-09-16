#include<iostream>

class IntIter
{
public:
	IntIter(int* p) : _p(p)
	{

	}
	bool operator!=(const IntIter& other)
	{
		return (_p != other._p);
	}
	const IntIter& operator++()
	{
		_p++;
		return *this;
	}
	int operator*() const
	{
		return *_p;
	}
private:
	int* _p;
};

template<unsigned int fix_size = 10>
class FixIntVector
{
public:
	FixIntVector(std::initializer_list<int>init_list)
	{
		int* cur = data_;
		for (auto e : init_list)
		{
			*cur = e;
			cur++;
		}
	}

	IntIter begin()
	{
		return IntIter(data_);
	}

	IntIter end()
	{
		return IntIter(data_ + fix_size);
	}
private:
	int data_[fix_size]{ 0 };
};

int main()
{
	FixIntVector<>fix_int_vector{1,3,6,7,8,9};
	for (const auto& e : fix_int_vector)
	{
		std::cout << e << std::endl;
	}
	return 0;
}