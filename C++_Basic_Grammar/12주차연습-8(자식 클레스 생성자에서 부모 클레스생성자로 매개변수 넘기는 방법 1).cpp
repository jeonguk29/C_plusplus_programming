#include <iostream>
using std::cout;
using std::endl;

class A {
	int a;
public:
	A(int i) {
		cout << "A의 생성자\n";
		a = i;
	}
	~A() { cout << "A의 소멸자\n"; }
	void ShowA() { cout << a << '\n'; }
};
class B :public A {
	int b;
public:
	B(int i, int j) :A(i) {// i는 기본클래스 생성자의 매개변수로 전달             
		cout << "B의 생성자\n";  // 파생클래스생성자(매개변수 리스트) :기본클래스생성자(매개변수 리스트) 
		b = j;
	}
	~B() { cout << "B의 소멸자\n"; }
	void ShowB() { cout << b << endl; }
};
 int main(void)
{
	B bb(10, 20);
	bb.ShowA();
	bb.ShowB();
}

// 자식 클레스 생성자에서 부모 클레스생성자로 매개변수 넘기는 방법
// 파생 클래스 생성자에서 기본 클래스 생성자에 매개변수 전달 형식

/*

A의 생성자
B의 생성자
10
20
B의 소멸자
A의 소멸자

*/
