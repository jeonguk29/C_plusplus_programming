#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
class Dog {
private:
	int age;
	const char* name;
	//char name[20];
public:
	void setAge(int a);
	int getAge();

	void setName(const char* n);
	const char* getName();

};

void Dog::setAge(int a) {     // 이렇게 외부에다 선언하면 인라인이 아님 위에 올라와서 다시 내려감 
	age = a;                  // 여기다 인라인 쓰면 인라인이 되긴함 
}

int Dog::getAge() {
	return age;
}

void Dog::setName(const char* n) {
	name = n; // 같은 포인터변수라 주소를 넘겨주기 때문에 이렇게만 해주면됨 더 선호하는 방법 
	//strcpy(name, n);
}
const char* Dog::getName() {
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

