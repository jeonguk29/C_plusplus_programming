#include <iostream>
using std::cout;
using std::endl;

int main(void)
{
	int a;
	int& ra = a;
	a = 10;
	cout << a << ra << endl;
	ra = 20;
	cout << a << ra << endl;
	a = 30;
	cout << a << ra << endl;
	
	return 0;
}

/*

참조자는 별명임 즉 변수의 별명임 
하나가 바뀌면 나머지 하나가 바뀜 
여기서는 a가 변수면 ra가 참조자 (변수 별명임)
참조자 쓰려면 & 써주기
*/
