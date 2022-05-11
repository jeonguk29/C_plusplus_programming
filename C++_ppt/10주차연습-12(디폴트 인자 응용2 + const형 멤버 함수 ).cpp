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

};
int main()
{
	Point p1, p2(1, 2);         // 포인터 클레스 객체 p1생성 
	// p1.setX(0); p1.setY(0);
	cout << p1.getX() << "  " << p1.getY() << endl;
	cout << p2.getX() << "  " << p2.getY() << endl;
	

}

/*
 const형을 선언하고자 하면 멤버변수는 형 앞에 const를, 멤버함수는 함수의 괄호 다음에 const를 추가한다. 
 const int age;   //멤버변수는 형 앞에
 int getAge() const;  //멤버함수는 괄호 다음에

*/
