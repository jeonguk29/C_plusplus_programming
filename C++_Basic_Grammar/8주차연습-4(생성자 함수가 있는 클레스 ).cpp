#include <iostream>
using std::cout;
class Dog {
private:
	int age;
public:
	Dog() {     // 도그라는 생성자 이름 맘대로 안됨 클레스랑 같아야되고 리턴 값이 없음 
		age = 0; // 리턴값이 없지만 앞에 void를 안씀 내가 만들지만 호출은 컴퓨터가 알아서 호출돔
	}            // 객체가 만들어질때 자동 호출 
	int getAge();
	void setAge(int a);
};

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
	Dog happy,h;   //happy객체가 생성되는 순간 생성자가 자동 호출됨
	cout << happy.getAge();
	cout << h.getAge();
	return 0;
}

