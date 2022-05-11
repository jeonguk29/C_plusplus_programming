#include <iostream>
using std::cout;
class Dog {
private:
	int age;
public:
	Dog(int a); // 생성자의 매개변수 를 받아 초기화를 해줌 
	~Dog();
	int getAge();
	void setAge(int a);
};

Dog::Dog(int a) {
	age = a;
}
Dog::~Dog() {
	cout << "소멸~\n";
}

int Dog::getAge()
{
	return age;
}
void Dog::setAge(int age)
{
	this -> age = age; // 자동적으로 만듬 따로 선언 필요없음 호출 하는 객체의 주소가 들어가고 현제 클레스의 객체를 이야기함 
    // 맴버변수age = 매개변수age
}
int main()
{
	Dog happy(1),h(2);  // 생성자는 객체만들어지면 자동 호출이 되서 매개변수가 있으면 반드시 미리 매개변수
	cout << happy.getAge(); // 를 () 이안에 넣주어야함  없으면 오류남 
	cout << h.getAge();



	return 0;
}

