#include <iostream>
using std::cout;
using std::cin;
using std::endl;
void Div(double ja, double mo)
{
	try { //예외 발생 소스를 묶음
		cout << "결과:" << ja / mo << endl;
	}
}


void main()
{
	double x, y;

	cout << "분자를 입력하세요";
	cin >> x;
	cout << "분모를 입력하세요";
	cin >> y;
	Div(x, y);
}

