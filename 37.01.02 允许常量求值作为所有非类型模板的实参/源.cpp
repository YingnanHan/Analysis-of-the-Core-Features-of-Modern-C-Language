template<const char*> struct Y {};
extern const char str1[] = "hello world"; // �ⲿ����
const char str2[] = "hello world"; // �ڲ�����

int main()
{
	Y<str1> y1;
	Y<str2> y2;
}
