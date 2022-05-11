#include <iostream>
using std::cout;
using std::endl;

class Dog {
private:
	int age;
public:
	Dog() { age = 1; }      // 매개변수가 없는 생성자
	Dog(int a) { age = a; } // 매개변수가 하나인 생성자
	~Dog();
	int getAge();
	void setAge(int a);
};
Dog::~Dog()
{
	cout << "소멸";
}
int Dog::getAge()
{
	return age;
}
void Dog::setAge(int a)
{
	age = a;
}
int main(void)
{
	Dog happy(5), meri;
	cout << happy.getAge() << "," << meri.getAge() << endl;
}
/*
5,1
소멸소멸
*/
