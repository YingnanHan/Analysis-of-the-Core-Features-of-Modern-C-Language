class [[nodiscard]] X 
{

};

X& bar(X& x) 
{ 
	return x;
};

int main()
{
	X x;
	bar(x);	// bar�������ã�nodiscard�������ã�������������
}
