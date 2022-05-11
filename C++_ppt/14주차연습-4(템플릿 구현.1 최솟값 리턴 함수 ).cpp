#include <iostream>
using std::cout;

template <class T>  T Min( T n1, T n2) // 자료형이 T
{                // 리턴형, 매개변수가 모두 T형        
	return (n1<n2? n1:n2);
}
int main(void)
{
	int min_i;
	min_i=Min(3,6);    
     // 매개변수 자료형이 정수형으로 T는 int형이 됨
    cout<<min_i<<",";
	double min_d;
	min_d=Min(10.3,20.6); 
     // 매개변수 자료형이 double형으로 T는 double형이 됨
	cout<<min_d;
	
	return 0;
}


