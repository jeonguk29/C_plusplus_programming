#include <iostream>
using std::cout;
using std::endl;
class Dog {
private:
	int age;
public:
	Dog(int a = 1) { age = a; }
	// 디폴트 매개변수를 갖는 생성자
	~Dog();
	int getAge();
	void setAge(int a);
};
Dog::~Dog()
{
	cout << "소멸\n";
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
	Dog meri, happy(5);
	cout << happy.getAge() << "," <<
		meri.getAge() << endl;
}

/*
5,1
소멸
소멸
*/
