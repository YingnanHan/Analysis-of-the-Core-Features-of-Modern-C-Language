template <class T, class U> struct C {
	C(T, U) {}
};

template<class V>
using A = C<V*, V*>;

int i{};
double d{};
A a1(&i, &i);	// ����ɹ��������Ƶ�ΪA<int>
A a2(i, i);	    // ����ʧ�ܣ�i�޷��Ƶ�ΪV*
A a3(&i, &d);	// ����ʧ�ܣ�(int *, double *)�޷��Ƶ�Ϊ(V*, V*)
