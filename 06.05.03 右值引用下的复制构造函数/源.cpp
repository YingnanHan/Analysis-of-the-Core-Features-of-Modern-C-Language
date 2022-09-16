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
		//cout << "move big memory pool." << endl;
		pool_ = other.pool_;
		other.pool_ = nullptr;
	}
	BigMemoryPool(const BigMemoryPool& other) :pool_(new char[PoolSize]) // �������ƹ��캯��
	{
		//cout << "copy big memory pool." << endl;
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


int main()
{
	auto start = std::chrono::high_resolution_clock::now();
	for (int i = 0; i < 1000000; i++)
	{
		BigMemoryPool my_poolr = make_poolr();
	}
	auto end = std::chrono::high_resolution_clock::now();
	std::chrono::duration<double> diff = end - start;
	cout << "Time to call make_poolr():" << diff.count() << endl;
	start = std::chrono::high_resolution_clock::now();
	for (int i = 0; i < 1000000; i++)
	{
		BigMemoryPool my_pooll = make_pooll();
	}
	end = std::chrono::high_resolution_clock::now();
	diff = end - start;
	cout << "Time to call make_pooll():" << diff.count() << endl;

	BigMemoryPool my_pool;
	my_pool = make_poolr();


	return 0;
}