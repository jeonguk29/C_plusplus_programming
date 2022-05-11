#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
class Dog {
private:
	int age;
	string name;
	//char name[20];
public:
	void setAge(int a);
	int getAge();

	void setName(string n);
	string getName();

};

void Dog::setAge(int a) {      // string = const char* 똑같다고 생각하면 됨
	age = a;                 
}

int Dog::getAge() {
	return age;
}

void Dog::setName(string  n) {
	name = n; 
}
string Dog::getName() {
	return name;
}

int main()
{
	Dog happy;
	happy.setAge(3);
	cout << "나이:" << happy.getAge(); // 함수라 ()꼭 써줘야함 안그럼 오류 
	happy.setName("해피");
	cout << "   이름:" << happy.getName(); 

	return 0;
}

