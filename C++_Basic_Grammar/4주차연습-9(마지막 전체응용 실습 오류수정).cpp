#include <iostream>
using std::cout;
using std::endl;
class Dog {
private:
	int age;           // privat 멤머변수 age는 이 안에서만 접근가능   
	double w;
public:
	int getAge();
	void setAge(int a);
	double getW();
	void setW(double a);
};
int Dog::getAge()
{
	return age;
}
void Dog::setAge(int a)
{
	age = a;
}
double Dog::getW()
{
	return w;
}
void Dog::setW(double b)
{
	w = b;
}

int main()
{
	Dog happy;               	// Dog class의 happy객체 정의     	// ① Dog는 class
	happy.setAge(3);           	// ② age는 private멤버로 클래스 밖에서 접근 불가
	cout << happy.getAge() << endl;     	// ③ age는 전용멤버로 접근 불가

	happy.setW(30.3);           
	cout << happy.getW();

	return 0;
}

