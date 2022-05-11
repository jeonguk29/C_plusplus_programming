#include <iostream>

using namespace std;
void b();//함수 선언, 프로토타입
void bbb(int x); 
int bbb1(int x); 
int add(int x,int y);
int main()
{
   int x;
    
   cout<<"aaa\n";
   b(); // 함수 호출  함수 call
   bbb(10); //int 10 ㄴㄴ 이미 함수에서 int형인걸 앎 그냥 값만 입력
   cout << bbb1(20);
   x = bbb1(20);// bbb1 함수의 리턴값을 x에 저장한다. 그리고 나서 x의 값을 찍는 것임 리턴값을 받는 방법은 위에 소스랑 2가지임 
   cout << x <<endl;
   
   cout << add(10,40);
   
	/*
	결과 값  
	aaa
	bbb
	204040
	50
	*/
   return 0;
}

int add(int x,int y) // 매개변수가 여러개일때는  각각의 매개변수마다 자료형을 써줘야함 
{
   return (x+y);
}

int bbb1(int x) // 함수 정의 
{
   return x*2;
}

void bbb(int x) // 함수 정의 
{
   cout<<x*2;
}

void b() // 함수 정의 
{
   cout<<"bbb\n";
}
