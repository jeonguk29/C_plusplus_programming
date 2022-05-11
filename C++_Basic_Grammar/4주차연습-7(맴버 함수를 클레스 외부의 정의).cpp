#include <iostream>
using namespace std;
class Dog {                         // ** 멤머 함수들을 외부정의 하는 소스코드임  **
private:                            // 장: 내부 정의 와 다르게 클래스 내부 소스가 깔끔해짐 
	int age;
	double w;
public:
	void setAge(int a);
	int getAge();
	void setW(double x);
	double getW();
};

void Dog::setAge(int a) {           // 범위 지정 연산자(scope resolution operator) '::'
	age = a;
}
int Dog::getAge() {
	return age;
}
void Dog::setW(double x) {
	w = x;
}
double Dog::getW() {
	return w;
}
int main()
{
	Dog happy;
	happy.setAge(1);
	happy.setW(10.1);
	cout << "나이:" << happy.getAge() << "몸무게:" << happy.getW();

   /* 결과  
   나이:1몸무게:10.1 
   */
}

