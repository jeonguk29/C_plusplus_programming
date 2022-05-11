#include <iostream>
using std::cout;
using std::endl;

template <class T1, class T2> void fun(T1 x, T2 y) // 같은 자료형이 들어오면 T1만 만들면 되지만 각각의 다른 자료형이면 2개를 생성해줘야함  
{     // 두 개의 매개변수 자료형이 T1과 T2로 다르다.
	cout<<x<<"  "<<y<<endl;
}
int main(void)
{
  fun("Han",30); // T1은 문자열(char *),T2는 정수형(int)
  fun(25,50.5);   // T1은 정수형(int), T2는 double형 
  
  return 0;
}

/*

컴파일러는 템플릿 함수를 처리할 때 여러 개의 함수 코드를 만든다.
개발자가 만들어야 할 코드를 컴파일러가 대신 만든다.
템플릿을 사용하더라도 코드는 줄어들지 않는다.


*/
