#include <iostream>
using namespace std;
class cat {
private:
	int age;
	string name;
public:
	cat(int age, string name);
	~cat();
	void setName(string name);
	string getName();
	void setAge(int age);
	int getAge();
	void cry();

};// ; 안하면 감점
cat::cat(int age, string name) {
	this->age = age;
	this->name = name;
}
cat::~cat() {
	cout << "소멸";  // 객체가 하나라 한번 출력될 것임 
}
void cat::setName(string name) {
	this->name = name;
}
string cat::getName() {
	return name;
}

void cat::setAge(int age) {
	this->age = age;
}
int cat::getAge() {  // 자료형이 앞에 있어야함 
	return age;
}

void cat::cry() { // 일반 함수임 
	cout << "야옹\n";
}

int main()
{
	cat nabi(1,"aaaa");
	nabi.cry();
	cout << nabi.getName() << nabi.getAge() << endl;
	nabi.setAge(3); 
	nabi.setName("나비");
	nabi.cry();
	cout << nabi.getName() << nabi.getAge() << endl;

	return 0;
}

