
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

	void setX(int x); // 값을 입력 하는 함수 
	void setY(int y) {this -> y = y;} // 값을 입력 하는 함수 
	Point operator ++();                           // this 는 현제 객체의 주소를 가지고 있음 *붙이면 값이 나옴 멤버변수 x y는 객체안에 포함되어있음    

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

/*	Point operator +(Point ob) {
		Point temp;    // 새로운 지역 포인트 객체 
		temp.x = x + ob.x;     // x가 p1 호출 ob.x가 p2
		temp.y = y + ob.y;       // 1+(2) 개념 1이 호출하고 2가 매개변수로 들어감 즉 1 에 2만큼 더하는 것임 
		return temp;
	}
*/
	Point operator -(Point ob) {
		Point temp;    // 새로운 지역 포인트 객체 
		temp.x = x - ob.x;     // x가 p1 호출 ob.x가 p2
		temp.y = y - ob.y;
		return temp;
	}

	string operator ==(Point ob)
	{
		return (x == ob.x && y == ob.y) ? "참 입니다." : "거짓 입니다.";  // 같으면 T, 다르면 F
	}
	
	/*                             리턴이 객체가 아니니깐 그에 맞는 리턴형을 적어 주어야함  
	char operator ==(Point ob);    
	
		char Point::operator ==(Point ob) 
	{
		return (x==ob.x && y==ob.y)?'T':'F';  // 같으면 T, 다르면 F
	} 

	
	*/

	operator int() { return x * y; }  //x*y 아무뜻 없는것임   형변환 할때 사용하는 것 

};

Point Point:: operator ++() {   // 이렇게 연산자 중첩된것을 외부의 정의 할때 주의 해야함 1 리턴형 2 클레스 명 3 함수 이름 
	++x; ++y;
	return *this;  
}

void Point:: setX(int x) {
	this->x = x; 
}

int main()
{
	int i;
	Point p1,p2(1, 2),p3;         // 포인터 클레스 객체 p1생성 
	i = p2;
	cout << i << endl;
	cout << (p2+6) << endl; 


	cout << (p1 == p3) << endl; //두 좌표가 같습니다.
	cout << (p1 == p2) << endl;//두 좌표가 다릅니다.
	cout << p3.getX() << "  " << p3.getY() << endl; //(0,0)
	cout << p1.getX() << "  " << p1.getY() << endl;//(1,1)
	p3 = p1 + p2;
	p3 = p1 - p2; // 3.3
	cout << p3.getX() << "  " << p3.getY() << endl;//(1,1)
	



}


