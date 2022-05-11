#include <iostream>
using std::cout;
void swap(int&, int&);
int main(void)
{
	int a = 2, b = 5;
	cout << a << '\t' << b << '\n';
	swap(a, b);
	cout << a << '\t' << b << '\n';
}
void swap(int& ra, int& rb)   // 참조자(레퍼런스)를 이용한 콜바이 레퍼런스  c++ 에서만 가능 이전 소스는 원래 c에서 사용하는 방법임
{
	int temp;
	temp = ra;
	ra = rb;
	rb = temp;

}

/*
참조자는 별명임 즉 변수의 별명임 
하나가 바뀌면 나머지 하나가 바뀜 
여기서는 a가 변수면 ra가 참조자 (변수 별명임)
참조자 쓰려면 & 써주기
*/

