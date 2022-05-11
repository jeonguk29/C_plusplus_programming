#include <iostream>
using std::cout;
using std::endl;
template <class T> void swap(T& x, T& y)
{  // 템플릿 함수 , 포괄적 함수 만들기
	T temp;      // 값을 받을 때 void swap(T& x, T& y) 여기 들어오는 자료형이 인트면 결정 되지 않는 자료형 T가 다 인트형으로 바뀜 temp 또한 int형으로
	temp = x;
	x = y;
	y = temp;
}
int main()
{
	int i1 = 1, i2 = 2;
	char c1 = 'a', c2 = 'b';
	double d1 = 3.5, d2 = 5.5;

	cout << i1 << "," << i2 << endl;	swap(i1, i2);
	cout << i1 << "," << i2 << endl;
	cout << c1 << "," << c2 << endl;	swap(c1, c2);
	cout << c1 << "," << c2 << endl;
	cout << d1 << "," << d2 << endl;	swap(d1, d2);
	cout << d1 << "," << d2 << endl;
}

// 시험 나옴  
