class [[nodiscard]] X 
{

};

[[nodiscard]] int foo() 
{ 
	return 1; 
}

X bar()
{
	return X();
};

int main()
{
	X x;
	foo();
	bar();
}
