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
	BigMemoryPool(const BigMemoryPool& other) :pool_(new char[PoolSize])
	{
		cout << "copy big memory pool." << endl;
		memcpy(pool_, other.pool_, PoolSize);
	}
};

BigMemoryPool get_pool(const BigMemoryPool& pool)
{
	return pool; // 返回传入引用对象的副本
}

BigMemoryPool make_pool()
{
	BigMemoryPool pool;
	return get_pool(pool);
}

int main()
{
	BigMemoryPool my_pool = make_pool();
	return 0;
}