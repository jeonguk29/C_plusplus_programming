#include <iostream>
using std::cout;
using std::endl;
class A
{
	int x;
public:
	void SetX(int i) { x = i; }
	void ShowX() { cout << x << endl; }
};
class B :public A
{
	int y;
public:
	void SetY(int i) { y = i; }
	// void ShowXY() { cout << x << y << endl; }  오류남 프라이빗 객체 바로 접근 불가능임 
	void ShowXY() { ShowX(); cout << y << endl; } // 출력하려면 퍼블릭 으로만 접근 


};
int main(void)
{
	B bb;
	bb.SetX(1);       //  기본클래스의 멤버접근
	bb.SetY(2);       //  파생클래스의 멤버접근
	bb.ShowX();      //  기본클래스의 멤버접근
	bb.ShowXY();    //  파생클래스의 멤버접근
}


