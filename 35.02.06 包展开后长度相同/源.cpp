#include<iostream>

using namespace std;

template<class...> 
struct Tuple 
{

};

template<class T1, class T2> 
struct Pair 
{

};

template<class ...Args1>
struct zip 
{
	template<class ...Args2>
	struct with 
	{
		typedef Tuple<Pair<Args1, Args2>...> type;
	};
};

int main()
{
	zip<short, int>::with<unsigned short, unsigned>::type t1;	// ����ɹ�
	// zip<short>::with<unsigned short, unsigned>::type t2;			// ����ʧ�ܣ��βΰ����Ȳ�ͬ
}
