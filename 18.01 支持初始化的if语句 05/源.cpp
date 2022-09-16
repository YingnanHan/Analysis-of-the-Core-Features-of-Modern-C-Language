#include<iostream>
#include<mutex>

using namespace std;

mutex mx;
bool shared_flag = true;

int main()
{ 
	// 为了防止在线程使用mutex加锁后异常退出导致死锁的问题
	if (lock_guard<mutex> lock(mx); shared_flag)
	{
		shared_flag = false;
	}
}