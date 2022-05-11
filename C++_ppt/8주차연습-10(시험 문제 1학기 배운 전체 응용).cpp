#include <iostream>
using namespace std;
class cat {
private:
	int age;
	string name;
public:
	cat(int age, string name) {
		this->age = age;
		this->name = name;
	}
	~cat() {
		cout << "소멸";  // 객체가 하나라 한번 출력될 것임 
	}
	void setName(string name) {
		this->name = name;
	}
	string getName() {
		return name;
	}

	void setAge(int age) {
		this->age = age;
	}
	int getAge() {
		return age;
	}

	void cry() {
		cout << "야옹\n";
	}

};// ; 안하면 감점
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

