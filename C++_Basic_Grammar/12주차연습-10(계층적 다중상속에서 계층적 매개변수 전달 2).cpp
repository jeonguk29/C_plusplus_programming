#include <iostream>
using std::cout;
using std::endl;

class B {   //할아버지
	double d;
public:
	B(double dd) { d = dd; }
	double GetD() { return d; }
};
class D1 :public B {  //아버지
	int i;
public:
	D1(double dd, int ii) :B(dd) { i = ii; }
	int GetI() { return i; }
};

class D2 :public D1 {   //아들
	char c;
public:
	D2(double dd, int ii, char cc) :D1(dd, ii) { c = cc; }
	void Print() {
		cout << "Double : " << GetD() << endl;
		// B 멤버 호출
		cout << "Int : " << GetI() << endl;
		// D1 멤버 호출
		cout << "Char : " << c << endl;
	}
};
int main(void)
{
	D2 d2(35.76, 100, 'H');
	cout << d2.GetD() << ',' << d2.GetI() << endl;
	// B, D1 멤버 호출
	d2.Print();
}

