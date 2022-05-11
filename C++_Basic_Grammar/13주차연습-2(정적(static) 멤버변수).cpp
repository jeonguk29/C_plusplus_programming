#include <iostream>
using std::cout;

class Point{
  int x;
  int y;
  static int count;   //선언
public:
   Point(){cout<<++count;} 
  ~Point(){cout<<--count;}
};
int Point::count=0;  //정의  (꼭해줘야함 없으면 오류 남 ) 보통 객체들이 몇가지 생성 되어 있는지 확인하려고 함  
int main(void)
{
  Point p1,p2,p3;
  
  return 0;
}

/*

모든 객체가 공유하는 멤버변수
한 클래스로부터 객체가 여러 개 만들어지더라도 이 멤버변수는 하나만 생성됨
여러 객체들에서 공유해야 하는 정보는 정적 멤버변수로 선언

클래스 선언이 기억장소를 할당하는 것이 아니므로 정적 멤버변수는 클래스 밖에서 초기화를 함(정의함, 초기화값이 없으면 0으로 초기화됨) 

123210

*/
