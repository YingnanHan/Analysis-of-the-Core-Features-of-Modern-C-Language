#include<iostream>

using namespace std;

class BigMemoryPool
{
private:
	char* pool_;
public:
	static const int PoolSize = 4096;
	BigMemoryPool() :pool_(new char[PoolSize])
	{

	}
	~BigMemoryPool()
	{
		if (pool_ != nullptr)
		{
			delete[] pool_;
		}
	}
	BigMemoryPool(BigMemoryPool&& other) 
	{
		cout << "move big memory pool." << endl;
		pool_ = other.pool_;
		other.pool_ = nullptr;
	}
	BigMemoryPool(const BigMemoryPool& other) :pool_(new char[PoolSize])
	{
		cout << "copy big memory pool." << endl;
		memcpy(pool_, other.pool_, PoolSize);
	}
};

BigMemoryPool get_pool(BigMemoryPool&& pool)
{
	return pool; // 返回右值对象
}

BigMemoryPool make_pool()
{
	BigMemoryPool pool; 
	return get_pool(static_cast<BigMemoryPool&&>(pool)); // 返回右值对象
}

int main()
{
	BigMemoryPool my_pool = make_pool();
	return 0;
}