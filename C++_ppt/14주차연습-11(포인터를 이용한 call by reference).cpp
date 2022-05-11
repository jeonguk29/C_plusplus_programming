#include <iostream>
using std::cout;
void swap(int* ra, int* rb); 
int main(void)
{
	int a = 2, b = 5;
	cout << a << '\t' << b << '\n'; // 2 5
	swap(&a, &b);   // call by reference(주소)  주소를 넘가가 때문에
	cout << a << '\t' << b << '\n'; // 2 5
}
void swap(int *ra, int *rb) // 구둣점, 뒤에 오는 변수가 포인터이다.
{
	int temp;
	temp = *ra; // 주소의 값을 가져오는 연산자, temp = 2
	*ra = *rb;  
	*rb = temp;
}

