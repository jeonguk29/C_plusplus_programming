#include <iostream>
using std::cout;
using std::endl;

class A            // 기본 클래스
{
	int x;
public:
	void SetX(int i) { x = i; }
	void ShowX() { cout << x << endl; }
};
class B :public A //파생 클래스
{
	int y;
public:
	void SetY(int i) { y = i; }
	void ShowY() { cout << y << endl; }
};
int main(void)
{
	B bb;                 //파생클래스의 객체
	// bb.x = 1;             오류남
	// bb.y = 2;             직접 접근 안됨
	   bb.SetX(1);
	   bb.SetY(2);  // 상속되있어서 가능함 
	bb.ShowX(); //기본클래스의 멤버접근
	bb.ShowY(); //파생클래스의 멤버접근
}

