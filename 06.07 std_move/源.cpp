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
	BigMemoryPool(BigMemoryPool&& other)  // �ƶ����幹�캯��
	{
		cout << "move big memory pool." << endl;
		pool_ = other.pool_;
		other.pool_ = nullptr;
	}
	BigMemoryPool(const BigMemoryPool& other) :pool_(new char[PoolSize]) // �������ƹ��캯��
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

// ��ֵ�汾
BigMemoryPool get_poolr(BigMemoryPool&& pool)
{
	return pool; // ������ֵ����
}

BigMemoryPool make_poolr()
{
	BigMemoryPool pool;
	return get_poolr(static_cast<BigMemoryPool&&>(pool)); // ������ֵ����
}

// ��ֵ�汾
BigMemoryPool get_pooll(const BigMemoryPool& pool)
{
	return pool; // ���ش������ö���ĸ���
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