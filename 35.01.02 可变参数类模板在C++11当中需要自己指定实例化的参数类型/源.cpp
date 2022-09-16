template<class ...Args>
class bar {};

int main()
{
	bar<> b1;
	bar<int> b2;
	bar<int, double> b3;
	bar<int, double, unsigned int> b4;
}
