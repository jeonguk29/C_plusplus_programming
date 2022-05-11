#include <iostream>
using std::cout;
using std::endl;

class B1 {  //아버지
	double d;
public:
	B1(double dd) { d = dd; }
	double GetD() { return d; }
};
class B2 {  //어머니
	int i;
public:
	B2(int ii) { i = ii; }
	int GetI() { return i; }
};
class D :public B1, public B2 {
	char c;
public:
	D(double dd, int ii, char cc) :B1(dd), B2(ii) { c = cc; }
	void Print() {
		cout << "Double : " << GetD() << endl;
		cout << "Int : " << GetI() << endl;
		cout << "Char : " << c << endl;
	}
};
int main(void)
{
	D d(35.76, 100, 'H');
	cout << d.GetD() << ',' << d.GetI() << endl;
	d.Print();
}

/*
결과 
35.76,100
Double : 35.76
Int : 100
Char : H
*/
