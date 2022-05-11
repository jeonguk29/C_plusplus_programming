#include <iostream>
using std::cout;
class Dog{
private:
	int age;
public:
	int getAge();
	void setAge(int a);
};
int Dog::getAge()
{	return age; }
void Dog::setAge(int a)
{ 	age=a; }

int main()
{
	 Dog happy;              
	 happy.setAge(3);           	
	 cout<<happy.getAge();     	
     return 0;
}

/*
#include <iostream>
using std::cout;
class Dog{
private:
	int age;
public:
	int getAge();
	void setAge(int a);
};
int Dog::getAge()
{	return age; }
void Dog::setAge(int a)
{ 	age=a; }

int main()
{
	 Dog happy;               	// Dog class의 happy객체 정의
     Dog.age=2;               	// ① Dog는 class
	 happy.age=3;           	// ② age는 private멤버로 클래스 밖에서 접근 불가
	 cout<<happy.age;     	// ③ age는 전용멤버로 접근 불가
     return 0;
}

*/
