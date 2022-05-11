#include <iostream>
using std::cout;


class A1      // 기본 클래스 1
{
	int a;
public:
	A1() { cout << "A1의 생성자.\n"; }
	~A1() { cout << "A1의 소멸자.\n"; }
};
class A2     // 기본 클래스 2
{
	int b;
public:
	A2() { cout << "A2의 생성자.\n"; }
	~A2() { cout << "A2의 소멸자.\n"; }
};
class A3     // 기본 클래스 3
{
	int c;
public:
	A3() { cout << "A3의 생성자.\n"; }
	~A3() { cout << "A3의 소멸자.\n"; }
};
class B : public A1, public A2, public A3
	// 기본 클래스 1과 2로부터 
	// 상속 받은 파생 클래스  
{
	int d;
public:
	B() { cout << "B의 생성자.\n"; }
	~B() { cout << "B의 소멸자.\n"; }
};
int main(void)
{
	B bb;
	
	return 0;
}


/*


A1의 생성자.
A2의 생성자.
A3의 생성자.
B의 생성자.
B의 소멸자.
A3의 소멸자.
A2의 소멸자.
A1의 소멸자.

*/
