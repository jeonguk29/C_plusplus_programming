// 생성자 중첩을 이용
 
#include <iostream>
#include <string>
using namespace std;

class Cat {
private: //생략가능
	int age;
	string name;
	//    char *name;
public:
	Cat()
	{
		age = 10, name = "깐돌";
		cout << name << "고양이 객체가 만들어졌어요.\n";
	}
	Cat(int age, string n)
	{
		this->age = age;
		name = n; // name=n; 
		cout << name << "고양이 객체가 만들어졌어요.\n";
	}
	
	~Cat() { cout << name << "객체 바이\n"; };
	int getAge() const;
	string getName() const;
	void setAge(int age);
	void setName(string pName);
	void meow() const;

};
int Cat::getAge() const
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
	name = pName;
}
string Cat::getName() const
{
	return name;
}
void Cat::meow() const
{
	cout << name << "고양이가 울어요\n";
}
int main(void)
{
	Cat nabi(1, "나비"), yaong(1, "야옹"), yaong3,* pNabi;
	cout << nabi.getName() << " 출생 나이는 " << nabi.getAge() << "살이다.\n";
	cout << yaong.getName() << " 출생 나이는 " << yaong.getAge() << "살이다.\n";
	cout << yaong3.getName() << " 출생 나이는 " << yaong3.getAge() << "살이다.\n";
	pNabi = &nabi;
	cout << pNabi->getName() << " 출생 나이는 " << pNabi->getAge() << "살이다.\n";
	nabi.setName("Nabi");
	nabi.setAge(3);
	cout << nabi.getName() << " 나이는 " << nabi.getAge() << "살이다.\n";
	yaong.meow();
	nabi.meow();
}

