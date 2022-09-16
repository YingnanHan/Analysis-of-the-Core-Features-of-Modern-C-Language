#include<iostream>

using namespace std;

template <class C>
requires std::is_integral_v<C>
struct X {};

int main()
{

}