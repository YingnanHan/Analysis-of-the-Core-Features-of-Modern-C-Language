#include<iostream>

using namespace std;

enum class HighSchool // ����ǿö�����͵Ĺؼ��� enum class
{
	student,
	teacher,
	principal,
	headmaster
};

enum class University // ����ǿö�����͵Ĺؼ��� enum class
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