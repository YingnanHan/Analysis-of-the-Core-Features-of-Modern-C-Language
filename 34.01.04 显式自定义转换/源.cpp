#include <iostream>
#include <vector>

template<class T>
class SomeStorage {
public:
	SomeStorage() = default;
	SomeStorage(std::initializer_list<T> l) : data_(l) {};
	explicit operator bool() const { return !data_.empty(); }
private:
	std::vector<T> data_;
};

int main()
{
	SomeStorage<float> s1{ 1., 2., 3. };
	SomeStorage<int> s2{ 1, 2, 3 };

	std::cout << std::boolalpha;
	std::cout << "s1 == s2 : " << (s1 == s2) << std::endl;	// ±àÒëÊ§°Ü
	std::cout << "s1 + s2  : " << (s1 + s2) << std::endl;	// ±àÒëÊ§°Ü
	std::cout << "s1 : " << static_cast<bool>(s1) << std::endl;
	std::cout << "s2 : " << static_cast<bool>(s2) << std::endl;
	if (s1) {
		std::cout << "s1 is not empty" << std::endl;
	}
}
