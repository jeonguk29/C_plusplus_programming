#include <iostream>
using namespace std;  // string 을 사용하려면 이렇게 해주어야함 

template <class T1, class T2> 
class CCC1
{
	T1 x;
	T2 y;
public:
	CCC1(T1 xx, T2 yy) { x = xx; y = yy; }
	void Print() { cout << x << ',' << y << endl; }
};


int main(void)
{
	CCC1 <int,int> c1(10, 20); // 클레스에서는 매개변수를 보낼때 미리 결정되지 않은 자료형에게 미리 알려줌 어떠한 자료형을 보낼지 
	CCC1 <double, double> c2(3.5, 5.5); 
	CCC1 <char, string>c3('I', "Love You!");
	CCC1 <double, int> c4(20.2, 10);

	c1.Print();
	c2.Print();
	c3.Print();
	c4.Print();
}
//하나의 클레스로 서로다른 객체 인스턴스 4개를 만듬
