#include <iostream>
using std::cout;

class Dog {
private:
	int age;
public:
	int getAge() { return age; }  	 //자동 inline함수
	void setAge(int a) { age = a; } //자동 inline함수
};
int main()
{
	int i;
	Dog dd[5];     //Dog클래스형 객체배열 dd, 강아지 5마리
	for (i = 0; i < 5; i++) {
		dd[i].setAge(i+1);
		cout << dd[i].getAge();   //(i)01234 (i+1)12345
	}
	return 0;  // 주석 단축키 ctrl k c 취소는 k u
}
