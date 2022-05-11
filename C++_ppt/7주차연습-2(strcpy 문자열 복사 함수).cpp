#define _CRT_SECURE_NO_WARNINGS // 쓰면 오류 안남 항상 맨위에다가 써줘야함 
#include <iostream>
#include <string.h> // 혹은  <string> 또는  <string.h> 써줘야함 컴파일러 마다 다름  

using std::cout;

int main(void)
{   
	char s1[5];
	char s2[5] = "soft";   //원본 

    strcpy(s1, s2);  //s2주소의 문자열을 s1주소로 복사 
	/* 	#define _CRT_SECURE_NO_WARNINGS 사용하면 
	 strcpy_s(s1,5,s2); 자동으로 안전한 함수를 사용함 
	 이함수는 직접 바이트 수를 정해주는 것임 만든 이유는 
	 char s1[3]  char s2[5] 바이트 수가 다르면 복사할때 치명적 오류가 나기 때문 
	*/
	
	cout << "s1=" << s1 << "  s2=" << s2;
	return 0;
}



