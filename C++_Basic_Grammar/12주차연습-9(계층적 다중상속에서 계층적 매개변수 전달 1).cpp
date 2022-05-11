#include <iostream>
using std::cout;
using std::endl;

class A                     //할아버지
{
	int a;
public:
	A(int i) { a = i; }                   // 생성자 A부터 실행이라 고려해서 미리 넘겨주어야함  
	int GetA() { return a; }
};
class B :public A         //아버지    
{
	int b;
public:
	B(int i, int j) :A(i) {
		// i는 기본 클래스 A의 
		//생성자 매개변수로 전달됨            넘기고 남은건 자기가 씀  
		b = j;
	}
	int GetB() { return b; }
};

class C :public B       //아들
{
	int c;
public:
	C(int i, int j, int k) :B(i, j) {                       // 매개변수의 개수 만큼 보내줘야함  
		// i, j는 클래스 B의 생성자 매개변수로 전달됨
		c = k;
	}
	void Show() {
		cout << GetA() << ' ' << GetB() << ' ' << c << endl;
	}
};
int main(void)
{
	C cc(10, 20, 30);

	cc.Show();
	cout << cc.GetA() << ' ' << cc.GetB() << endl;
}


