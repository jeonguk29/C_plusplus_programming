#include <iostream>
#include <string>
using namespace std;

class Cat {
private: //생략가능
	int age;
	string name;
	//    char *name;
public:
	Cat(int age, string n)
	{
		this->age = age;
		name=n; // name=n; 
		cout << name << "고양이 객체가 만들어졌어요.\n";
	}
	~Cat() { cout << name << "객체 바이\n"; };
	int getAge();
	string getName();
	void setAge(int age);
	void setName(string pName);
	void meow();

};
int Cat::getAge()
{
	return age;
}
void Cat::setAge(int age)
{
	this->age = age;
}
void Cat::setName(string pName)
{
	//strcpy(name, pName);
	//strcpy(대상주소, 원본주소);
	//strcpy_s(대상주소, 대상의길이, 원본주소);
	name=pName;
}
string Cat::getName()
{
	return name;
}
void Cat::meow()
{
	cout << name << "고양이가 울어요\n";
}
int main(void)
{
	Cat nabi(1, "나비"), yaong(1, "야옹"), * pNabi;
	cout << nabi.getName() << " 출생 나이는 " << nabi.getAge() << "살이다.\n";
	cout << yaong.getName() << " 출생 나이는 " << yaong.getAge() << "살이다.\n";
	pNabi = &nabi;
	cout << pNabi->getName() << " 출생 나이는 " << pNabi->getAge() << "살이다.\n";
	nabi.setName("Nabi");
	nabi.setAge(3);
	cout << nabi.getName() << " 나이는 " << nabi.getAge() << "살이다.\n";
	yaong.meow();
	nabi.meow();
	
	/*
	* pNabi  포인터 변수는 초기화 못함 주소를 넣는 거라서
	소멸자를 보면 나중에 만든 객체가 먼저 사라짐 (메모리 상에서 이렇게 관리를 하는데 os마다 다름 근데 일반적으로 이렇게 함)
	
	*/
	
	return 0;
}

