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
	bar(x);	// bar返回引用，nodiscard不起作用，不会引发警告
}
