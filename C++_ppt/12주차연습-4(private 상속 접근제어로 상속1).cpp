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
class B :private A  //비공개적으로 상속
{
	int y;
public:
	void SetY(int i) { y = i; }
	void ShowY() { cout << y << endl; }
};
int main(void)
{
	A aa;
	B bb;
	aa.SetX(1);
	aa.ShowX();
	//bb.SetX(1);  // 오류
	bb.SetY(2);  // 파생클래스의 멤버접근

	//bb.ShowX(); // 오류
	bb.ShowY(); // 파생클래스의 멤버접근
}

/*

class B:private A {
	int y;
    void SetX(int i){x=i;}                  이렇게 private 으로 들어감 즉 자식에서만 접근이 가능 외부 main 함수에서는 접근 불가  
	void ShowX(){cout<<x<<endl;}
public:
	void SetY(int i){y=i;}
	void ShowY(){ cout<<y<<endl;}
};



*/
