#include <iostream>
#include <string.h>

class SomeString {
public:
	SomeString(const char* p) : str_(strdup(p)) {}
	SomeString(int alloc_size) : str_((char*)malloc(alloc_size)) {}
	~SomeString() { free(str_); }
private:
	char* str_;
	friend void PrintStr(const SomeString& str);
};

void PrintStr(const SomeString& str)
{
	std::cout << str.str_ << std::endl;
}

int main()
{
	PrintStr("hello world");
	PrintStr(58);             // ´úÂëÐ´´í£¬È´±àÒë³É¹¦
}
