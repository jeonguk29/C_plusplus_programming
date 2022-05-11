#include <iostream>
using namespace std;
class Dog{
private:
	int age;
public:
	void setAge(int a);
	int getAge(); 

};

void Dog::setAge(int a) {     // 이렇게 외부에다 선언하면 인라인이 아님 위에 올라와서 다시 내려감 
	age = a;                  // 여기다 인라인 쓰면 인라인이 되긴함 
}

int Dog::getAge() {
	return age;
}

int main()
{
	Dog happy;
	happy.setAge(3);
    cout << "나이:" << happy.getAge(); // 함수라 ()꼭 써줘야함 안그럼 오류 
}






