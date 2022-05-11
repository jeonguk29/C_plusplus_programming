#include <iostream>
using std::cout;
using std::endl;

template <class T1 class T2> class CCC1
{
	T1 int x;
	T2 int y;
public:
	CCC1(int xx, int yy) { x = xx; y = yy; }
	void Print() { cout << x << ',' << y << endl; }
};


void main()
{
	CCC1 c1(10, 20);
	CCC1 c2(3.5, 5.5);
	CCC1 c3('I', "Love You!");

	c1.Print();
	c2.Print();
	c3.Print();
}
// 함수는 이렇게 하면 되었지만 클레스는 이작업에서 하나 더해줘야함 
