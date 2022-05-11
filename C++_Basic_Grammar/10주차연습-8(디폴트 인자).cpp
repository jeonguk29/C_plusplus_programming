
#include <iostream>
using std::cout;
int add(int i = 1, int j = 2)   // 형식매개변수    이런걸 디폴트 인자라고 말함 
{						// int add(int i=1, int j)  int add(int i, int j=2) 가능한가?  오른쪽만 가능 디폴트 인자를 지정하면   
																				// 그 다음 오른쪽 매개변수들도 디퐅트 해줘야 함  
	return(i + j);
}
int main(void)
{
	cout << add() << ",";        // 실매개변수 없음, 3
	cout << add(10) << ",";     // 실매개변수 한 개, 12
	cout << add(10, 20);         // 실매개변수 두개, 30
} 

//3,12,30
