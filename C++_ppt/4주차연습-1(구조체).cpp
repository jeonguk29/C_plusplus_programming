#include <iostream>
struct Dog{
	int age;
	double w;
}; 

using std::cout;
using std::cin;
using std::endl;

int main (void)
{
	Dog soft;   // c언어에서는 구조체 선언 앞에 struct를 썻지만 c++에서는 하지 않음
	soft.age = 1;
	soft.w = 10.1;
	cout << "나이" << soft.age << "몸무게" << soft.w << endl;
	cin >> soft.w;
	cout << "나이" << soft.age << "몸무게" << soft.w << endl;
	
	/* int x;
	cin >> x;
	cout << x << endl;
	*/
	return 0;
}
