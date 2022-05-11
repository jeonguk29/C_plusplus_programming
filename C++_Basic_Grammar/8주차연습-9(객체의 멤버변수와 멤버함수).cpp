#include <iostream>
using std::cout;
using std::endl;

class Dog {
private:
	int age; // int 는 4바이트 차이나야 되는 데 
// 현제 객체의 주소는 12바이트 차이남 안에 어떤게 선언 되어있느냐에 따라넉넉하게 해줌 더블은 8바이트 등등 
public:
	Dog(int a);
	~Dog();
	int getAge();
	void setAge(int a);
};
Dog::Dog(int a)
{
	age = a;
	cout << this << endl;
}
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
int main()
{
	Dog happy(5), meri(3);
	cout << happy.getAge(); 
	cout << meri.getAge();
	return 0;
}

/*
0x6ffe00                   12바이트 차이나는 것을 볼 수 있음  현제 객체의 주소는 12바이트 차이남 
0x6ffdf0
53소멸소멸
--------------------------------
Process exited after 0.08167 seconds with return value 0
계속하려면 아무 키나 누르십시오 . . .


*/
