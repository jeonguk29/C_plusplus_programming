#include <iostream>
using std::cout;
#define Sum(i,j) (i+j)                        /* 매크로함수  매크로 함수는 함수에 전달인자를 넘겨주는 것이 아니라, 
                                                  기호 이름으로 작용하여 단순히 텍스트로 대체하는 방법이다. */

inline int ISum(int i, int j)                    // inline 함수 
{
	return i + j;
}
int Add(int i, int j)                              // 일반 함수 
{
	return i + j;
}
int main(void)
{
	
	cout << Sum(10, 20) / 2 << ",";   //10+20/2   , 매크로함수의 부작용 (i+j) 이렇게 () 해주면 ㄱㅊ음  
	cout << ISum(10, 20) / 2 << ",";  //(10+20)/2   실행 코드가 바로 붙음  올라가서 내려올 필요 x 
	cout << Add(10, 20) / 2;          //(10+20)/2
	
	
	// 결과  15,15,15  (i+j)안해주면 20,15,15 
   return 0;
}


