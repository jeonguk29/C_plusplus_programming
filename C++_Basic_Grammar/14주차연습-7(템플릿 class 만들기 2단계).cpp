#include <iostream>
using std::cout;
using std::endl;

class CCC1
{
	int x;
	int y;
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

/*
기능이 비슷한 클레스 하나만 남겨두고 지움

현제 오류날 수 밖에 없음
*/
