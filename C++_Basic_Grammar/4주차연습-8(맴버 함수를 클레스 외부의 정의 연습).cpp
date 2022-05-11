#include <iostream>
using namespace std;
class Dog {
private:
	int age;
	double w;
public:
	void setAge(int a);
	int getAge();
	void setW(double x);
	double getW();
};

void Dog::setAge(int a) {
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
	cout << "나이:" << happy.getAge() << "몸무게:" << happy.getW() << endl;

	Dog happy1;
	happy1.setAge(2);
	happy1.setW(20.2);
	cout << "나이:" << happy1.getAge() << "몸무게:" << happy1.getW() << endl;
	
	Dog happy2;
	happy2.setAge(3);
	happy2.setW(30.3);
	cout << "나이:" << happy2.getAge() << "몸무게:" << happy2.getW();
	

   
}

