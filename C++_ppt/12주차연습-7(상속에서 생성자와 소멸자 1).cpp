
#include <iostream>
using std::cout;
class A
{
public:
	A() { cout << "A의 생성자 "; }
	~A() { cout << "A의 소멸자 "; }
};
class B :public A
{
public:
	B() { cout << "B의 생성자 "; }
	~B() { cout << "B의 소멸자 "; }
};

class C :public B
{
public:
	C() { cout << "C의 생성자 "; }
	~C() { cout << "C의 소멸자 "; }
};
int main(void)
{
	C ob;
}

// A의 생성자 B의 생성자 C의 생성자 C의 소멸자 B의 소멸자 A의 소멸자
