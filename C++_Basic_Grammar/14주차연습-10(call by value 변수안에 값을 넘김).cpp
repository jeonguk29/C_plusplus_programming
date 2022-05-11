#include <iostream>
using std::cout;
void swap(int, int); //void swap(int&, int&);
int main(void)
{
	int a = 2, b = 5;
	cout << a << '\t' << b << '\n'; // 2 5
	swap(a, b);   // call by value      함수를 호출할때 값을 가지고 호출한다 즉 변수안에 값을 넘김
	cout << a << '\t' << b << '\n'; // 2 5
}
void swap(int ra, int rb) //void swap(int& ra, int& rb)
{
	int temp;
	temp = ra;
	ra = rb;
	rb = temp;
	cout << ra << '\t' << rb << '\n'; // 5 2 
}

//변수안에 값을 넘김
