#include <iostream>
using std::cout;
using std::endl;

class A1              // 아버지
{
	int a;
public:
	A1(int i) { a = i; }
	int  GetA() { return a; }
};
class A2             // 어머니
{
	int b;
public:
	A2(int i) { b = i; }
	int GetB() { return b; }
};
class B :public A1, public A2
{
	// 기본 클래스 A1과 A2로부터 
	// 상속 받은 파생 클래스  
	int c;
public:
	B(int i, int j, int k) :A1(i), A2(j) { c = k; }
	// i는 기본클래스 A1의 생성자로, 
	// j는 기본클래스 A2의 생성자로
	// 각각 매개변수 전달
	void Show() {
		cout << GetA() << ' ' << GetB() << ' ' << c << endl;
	}
};
int main(void)
{
	B bb(1, 2, 3);
	bb.Show();
}

// 부모클래스가 2개인 경우    결과: 1 2 3 


