#include<iostream>
#include<mutex>

using namespace std;

mutex mx;
bool shared_flag = true;

int main()
{ 
	// Ϊ�˷�ֹ���߳�ʹ��mutex�������쳣�˳���������������
	if (lock_guard<mutex> lock(mx); shared_flag)
	{
		shared_flag = false;
	}
}