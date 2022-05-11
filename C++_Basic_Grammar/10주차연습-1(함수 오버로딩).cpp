
#include <iostream>
using namespace std;
class Point {
	int x;  // 멤버 변수 
	int y;
public:
	Point() { x = 0; y = 0; } //  생성자 리턴갑 있으나 void 사용하지 않음          생성 자는 중첩이 가능 하지만 소멸자는 중첩 불가능  
	Point(int xx, int yy) { x = xx; y = yy; }   // overloading 함수 중첩
	int getX() {return x;} // 값을 출력하는 함수 
	int getY() {return y;} // 값을 출력하는 함수 

	void setX(int x) {this -> x = x;}  // 값을 입력 하는 함수 
	void setY(int y) {this -> y = y;} // 값을 입력 하는 함수 

};
int main()
{
	Point p1, p2(1, 2);         // 포인터 클레스 객체 p1생성 
	// p1.setX(0); p1.setY(0);
	cout << p1.getX() << "  " << p1.getY() << endl;
	cout << p2.getX() << "  " << p2.getY() << endl;
	
}

// 0  0
// 1  2

