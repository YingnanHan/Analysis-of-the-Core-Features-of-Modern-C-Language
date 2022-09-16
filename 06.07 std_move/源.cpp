#include<iostream>
#include<chrono>

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
	BigMemoryPool(BigMemoryPool&& other)  // 移动语义构造函数
	{
		cout << "move big memory pool." << endl;
		pool_ = other.pool_;
		other.pool_ = nullptr;
	}
	BigMemoryPool(const BigMemoryPool& other) :pool_(new char[PoolSize]) // 拷贝复制构造函数
	{
		cout << "copy big memory pool." << endl;
		memcpy(pool_, other.pool_, PoolSize);
	}
	BigMemoryPool& operator=(BigMemoryPool&& other)
	{
		cout << "move operator=() big memory pool." << endl;
		if (pool_ != nullptr)
		{
			delete[] pool_;
		}
		pool_ = other.pool_;
		other.pool_ = nullptr;
		return *this;
	}
};

// 右值版本
BigMemoryPool get_poolr(BigMemoryPool&& pool)
{
	return pool; // 返回右值对象
}

BigMemoryPool make_poolr()
{
	BigMemoryPool pool;
	return get_poolr(static_cast<BigMemoryPool&&>(pool)); // 返回右值对象
}

// 左值版本
BigMemoryPool get_pooll(const BigMemoryPool& pool)
{
	return pool; // 返回传入引用对象的副本
}

BigMemoryPool make_pooll()
{
	BigMemoryPool pool;
	return get_pooll(pool);
}

void move_pool(BigMemoryPool &&pool)
{
	cout << "call move pool:" << endl;
	BigMemoryPool my_pool(static_cast<BigMemoryPool&&>(pool));
}

int main()
{
	move_pool(make_pooll());
	move_pool(make_poolr());
	return 0;
}