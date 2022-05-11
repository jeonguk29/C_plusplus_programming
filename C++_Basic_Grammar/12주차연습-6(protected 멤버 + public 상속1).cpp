#include <iostream>
using std::cout;
using std::endl;
class A
{
protected: //private이라면?
	int a, b;
public:
	void SetAB(int i, int j) { a = i; b = j; }
};

class B :public A
{
	int c;              //  private
public:
	void SetC(int n) { c = n; }
	void ShowABC() { cout << a << b << c << endl; }
	//기본 클래스의 protected 멤버들은 
	//파생 클래스의 멤버에 의해 접근될 수 있다.               
};
int main(void)
{
	//A aa; 필요없어짐 
	B bb;
	//aa.a;  //외부에서는 접근불가
	//bb.b;  //외부에서는 접근불가
	bb.SetAB(1, 2);
	bb.SetC(3);
	bb.ShowABC();
}

/*
class B:public A {
	int c;
protected:                                        내부적으로 이렇게 됨  
    int a,b;
public:      
	void SetAB(int i, int j){a=i;b=j;}
	void SetC(int n){c=n;}
	void ShowABC(){cout<<a<<b<<c<<endl;} };




*/
