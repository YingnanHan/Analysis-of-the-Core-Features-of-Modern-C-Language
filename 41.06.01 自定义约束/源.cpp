#include<iostream>
#include<vector>

using namespace std;

template <class T>
concept Check = requires 
{
	T().clear();
};

template <Check T>
struct G 
{

};

G<std::vector<char>> x; // ����ɹ�
G<std::string> y; // ����ɹ�
// G<std::array<char, 10>> z; // ����ʧ�� arrayû��clear()������Ա

int main()
{

	return 0;
}