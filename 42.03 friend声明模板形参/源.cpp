class C;
typedef C Ct;

class X1 {
	friend C;
	friend Ct;
	friend void;
	friend int;
};

template <typename T> class R {
	friend T;
};

int main()
{
	R<C> rc;
	R<Ct> rct;
	R<int> ri;
	R<void> rv;
}