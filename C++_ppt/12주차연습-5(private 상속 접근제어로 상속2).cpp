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
class B :private A  //비공개적으로 상속받는다
{
	int y;
public:
	void SetXY(int i, int j) { SetX(i); y = j; } // 기본 클래스의 public 멤버 접근
	void ShowXY() { ShowX(); cout << y << endl; } 
};
int main(void)
{
	B bb;
	bb.SetXY(1, 2);       // 파생클래스의 멤버접근
	bb.ShowXY();        // 파생클래스의 멤버접근
}

//자식아 너만 써라 외부에서는 접근 할수가 없음 자식에서는 있다고 가정을 하니까 외부에서는 모름 퍼블릭이
//아니라 

