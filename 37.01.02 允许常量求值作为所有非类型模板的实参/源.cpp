template<const char*> struct Y {};
extern const char str1[] = "hello world"; // 外部连接
const char str2[] = "hello world"; // 内部连接

int main()
{
	Y<str1> y1;
	Y<str2> y2;
}
