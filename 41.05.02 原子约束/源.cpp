#include<iostream>

using namespace std;

template <class T> concept sad = false;
template <class T> int f1(T) requires (!sad<T>) { return 1; };
template <class T> int f1(T) requires (!sad<T>) && true {return 2; };

template <class T> concept not_sad = !sad<T>;
template <class T> int f2(T) requires (not_sad<T>) { return 3; };
template <class T> int f2(T) requires (not_sad<T>) && true  { return 4; };

template <class T> int f3(T) requires (not_sad<T> == true) { return 5; };
template <class T> int f3(T) requires (not_sad<T> == true) && true  { return 6; };

template <class T> concept not_sad_is_true = !sad<T> == true;
template <class T> int f4(T) requires (not_sad_is_true<T>) { return 7; };
template <class T> int f4(T) requires (not_sad_is_true<T>) && true  { return 8; };

int main()
{
	f2(0);
	// f3(0); ±àÒëÊ§°Ü
	f4(0);
}