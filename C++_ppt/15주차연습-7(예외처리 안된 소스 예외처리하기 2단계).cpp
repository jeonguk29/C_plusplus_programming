#include <iostream>
using std::cout;
using std::cin;
using std::endl;
void Div(double ja, double mo)
{
	try { //예외 발생 소스를 묶음
		if (mo == 0)throw mo; //2단계 예외값을 던지는 것 조건에 따라 
		cout << "결과:" << ja / mo << endl; // 0이면 여기는 무시됨 
	}
	catch (int) { // 3단계 catch 다음에 자료형은 던져지는 예외값의 자료형을 써주는 것임
		cout << "오류:영으로 나눌 수 없음";
	}
	catch (double) { // catch 다음에 자료형은 던져지는 자료형을 써주는 것임
		cout << "오류:영으로 나눌 수 없음";
	}
}
int main()
{
	double x, y;

	cout << "분자를 입력하세요";
	cin >> x;
	cout << "분모를 입력하세요";
	cin >> y;
	Div(x, y);
}
 
