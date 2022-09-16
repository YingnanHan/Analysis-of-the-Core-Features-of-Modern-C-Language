void f(int(&)[]) {}
int arr[1];

int main()
{
	f(arr);
	int(&r)[] = arr;
}
