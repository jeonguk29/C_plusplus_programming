#include <iostream>
using std::cout;

void sub();
int main(void)
{
    sub();
    sub();
    sub();
    
    return 0;
}
void sub()
{
	// auto int x=10;    
    int x=10;    //동적 바인딩, run-time시, auto는 생략가능
    static int y=10;   //정적 바인딩, y의 초기값은 컴파일시 10으로
                       //정해지며 실행시에 이 선언문은 실행하지 않음
    cout<<x<<y<<'\n';
    x++;
    y++;
}

/*
1010
1011
1012
*/
