void g() {}
namespace N {
	struct A {};
	template <class T> int f(T) { return 1; }
	template <class T> int g(T) { return 2; }
	template <class T> int h(T) { return 3; }
}

void main()
{
	int h = 0;
	// N::A() ��Ϊһ�����󣬵�����������f
	int x = f<N::A>(N::A());  // ����ɹ�������fû���ҵ��κζ��壬f����Ϊ��ģ��
	int y = g<N::A>(N::A());  // ����ɹ�������g�ҵ�һ��������g����Ϊ��ģ��
	// int z = h<N::A>(N::A());  // ����ʧ�ܣ� ���������մ��ϵ��µ�˳�����Ϊh��һ�����ͱ���

}

