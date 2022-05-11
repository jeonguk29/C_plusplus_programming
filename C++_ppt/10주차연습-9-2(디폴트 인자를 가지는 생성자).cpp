#include <iostream>
using std::cout;
using std::endl;
class Dog {
private:
	int age;
public:
	// Dog(int a = 1) { age = a; }  이렇게 같이 스면 오류남 중첩을 하던가 디폴드 값을 주던가  이소스를 나눈 것이 아래 소스임  
	Dog() { age = 1; }
	Dog(int a) { age = a; }

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
