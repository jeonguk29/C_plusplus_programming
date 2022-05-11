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
class CCC2
{
	double x;
	double y;
public:
	CCC2(double xx, double yy) { x = xx; y = yy; }
	void Print() { cout << x << ',' << y << endl; }
};
class CCC3
{
	char x;
	const char* y;
public:
	CCC3(char xx, const char* yy) { x = xx; y = yy; }
	void Print() { cout << x << ',' << y << endl; }
};

int main(void)
{
	CCC1 c1(10, 20);
	CCC2 c2(3.5, 5.5);
	CCC3 c3('I', "Love You!");

	c1.Print();
	c2.Print();
	c3.Print();
	
	return 0;
}

