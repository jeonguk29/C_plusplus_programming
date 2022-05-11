#include <iostream>
using std::cout;
using std::cin;
using std::endl;
void Div(double ja, double mo)
{
	cout << "결과:" << ja / mo << endl;
}


int main(void)
{
	double x, y;

	cout << "분자를 입력하세요";
	cin >> x;
	cout << "분모를 입력하세요";                // 분자를 분모로 나눌때 분모가 0이면 무한 루프에 빠진다. (공식) 즉 구할 수 없는 숫자라  
	cin >> y;                                   // 이 계산에서는 3/0 하면 inf 나옴 무한루프의 약자 
	Div(x, y);									
}

