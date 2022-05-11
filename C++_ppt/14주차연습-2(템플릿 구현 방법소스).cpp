#include <iostream>
using std::cout;
using std::endl;

template <class T> T Max(T i, T j) // template 사용하려면 이런 문법 
{ // template <class> 우리가 하는 클레스가 아닌 그냥 문법임 
	return i > j ? i : j;
}

int main(void)
{
	cout << "Max값은=" << Max(1, 2) << endl;
	cout << "Max값은=" << Max(7.5, 3.6) << endl;
	cout << "Max값은=" << Max('A', 'B');
	
	return 0;
}
/*

결정되지 않는 자료형을 정하고 ex T 

함수이름 앞에  template <class> 를 함 

그리고 template <class T> 이렇게 결정 되지 않는 자료형을 쓴다 


T Max(T i, T j) 이렇게 하면 3군데 자료형이 다 바뀜 

*/
