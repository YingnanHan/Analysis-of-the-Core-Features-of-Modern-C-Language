#include<iostream>

using namespace std;

enum class HighSchool // 定义强枚举类型的关键字 enum class
{
	student,
	teacher,
	principal,
	headmaster
};

enum class University // 定义强枚举类型的关键字 enum class
{
	student,
	teacher,
	principal,
	headmaster
};

int main()
{

	HighSchool x = HighSchool::student;
	University y = University::student;
	bool b = x <= HighSchool::headmaster;
	cout << std::boolalpha << b << std::endl;

	return 0;
}