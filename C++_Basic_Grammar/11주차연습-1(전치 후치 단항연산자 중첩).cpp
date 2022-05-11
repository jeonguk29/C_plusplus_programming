
#include <iostream>
using namespace std;
class Point {
	int x;  // 멤버 변수 
	int y;
public:
	// Point() { x = 0; y = 0; } // overloading 
	Point(int xx=0, int yy=0) { x = xx; y = yy; }   // 디폴트 인자를 이용하여 
	int getX() const {return x;} // 콘스탄트형 멤버 함수 : 멤버변수를 변경 시키지 않는 함수 
	int getY() const {return y;} // 

	void setX(int x) {this -> x = x;}  // 값을 입력 하는 함수 
	void setY(int y) {this -> y = y;} // 값을 입력 하는 함수 
	Point operator ++() { // V	operator ++ dl gkatn dlfmadlek.  이것은 전치임
		++x; ++y;
		return *this;  // return x, y ; 이렇게 c나 c++은 두가지변수를 한번에 리턴을 못함 
	}                           // this 는 현제 객체의 주소를 가지고 있음 *붙이면 값이 나옴 멤버변수 x y는 객체안에 포함되어있음    

	Point operator ++(int) {  // 후치는 매개변수에 int라는 자료형을 써줌으로 써 구분함 다른거 안됨 오로직 int만 변수입력 x 쓰레기 값으로 줘야함 
		++x; ++y;
		return *this;
	}

	Point operator --() {
		--x; --y;
		return *this;
	}

	Point operator --(int) { 
		--x; --y;
		return *this;  
	}
};
int main()
{
	Point p1, p2(1, 2);         // 포인터 클레스 객체 p1생성 
	cout << p1.getX() << "  " << p1.getY() << endl; //(0,0)
	++p1;
	cout << p1.getX() << "  " << p1.getY() << endl;//(1,1)
	p1++;
	cout << p1.getX() << "  " << p1.getY() << endl;//(2,2)
	--p1;
	cout << p1.getX() << "  " << p1.getY() << endl;//(1,1)
	
	cout << p2.getX() << "  " << p2.getY() << endl; //(1,2)
	++p2;
	cout << p2.getX() << "  " << p2.getY() << endl;//(2,3)
	p2++;
	cout << p2.getX() << "  " << p2.getY() << endl;//(3,4)
	--p2;
	cout << p2.getX() << "  " << p2.getY() << endl;//(2,3)
	
	
}


