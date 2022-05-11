#include <iostream>
using std::cout;

int main()
{
	int x = 10;
	int* px = &x;

	cout << x << " " << &x << " "  <<  px << '\n'; 
	cout << x << " " << *&x << " " << *px << '\n';

	char y = 'A';
	char* py = &y;
	cout << y << " " << &y << " " << py << '\n';
	cout << y << " " << *&y << " " << *py << '\n';   

	//char * py 두가지 의미를 가짐 py가 가진 주소라 가면 문자가 있다 그다음에도 문자가 있으면 문자열이다.
	// 다음시간 실습 4부터 문자열을 가지고 놀때는 const 써주기  
	// 즉 char* 는 문자 포인터 변수 즉 전체적으로 문자 하나만 가지고 놀겠다는 소리임. (컴파일 할때 께져서 주소가 안보일수 있음) 
	// const char* 는 문자열 포인터 변수 즉 전체적으로 문자열을 가지고 놀겠다는 소리임.  

	return 0;
}

