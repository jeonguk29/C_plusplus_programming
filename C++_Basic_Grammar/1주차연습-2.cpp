#include <iostream>

using namespace std;

int main()

{

int num1, num2; //변수 선언문, 실행문 보다 먼저 씀  c랑 같음 w 

num1=100; //대문자와 소문자는 다른 변수로 인식 

num2=-300; //변수에 상수 대입

cout << "두수의 합은 " << num1 + num2 << " 입니다.";


return 0;

}




/*



#include <stdio.h> //printf()함수 원형이 선언되어 있음, 전처리기

int main(void) //콘솔 기반 C프로그램의 시작점

{ //main()함수의 시작

int num1, num2; //변수 선언문, 실행문 보다 먼저 씀

num1=100; //대문자와 소문자는 다른 변수로 인식

num2=-300; //변수에 상수 대입

printf("두 수의 합은 %d입니다.\n",num1+num2);

//표준 라이브러리 함수

return 0;

} //main()함수의 끝


*/
