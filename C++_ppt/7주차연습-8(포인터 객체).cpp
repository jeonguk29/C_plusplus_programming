#include <iostream>
using std::cout;

class Dog {
private:
	int age;
public:
	int getAge() { return age; }
	void setAge(int a) { age = a; }
};
int main()
{
	Dog happy, * pd;   //일반 객체 happy와 포인터 객체 pd, int x, *px;
	pd = &happy;       //px=&x;
	happy.setAge(5);    //일반 객체는 '.'으로 멤버를 접근 
	cout << pd->getAge();  //포인터 객체는 '->'로 멤버를 접근
	return 0;
}


