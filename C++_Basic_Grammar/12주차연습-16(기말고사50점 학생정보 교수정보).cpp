/*
사람클래스(Man,멤버변수:이름,나이)를 만드시오.
멤버변수를 초기화하는 생성자를 구현하시오. 
기타 함수를 구현하시오.
사람클래스로부터 상속받은 학생클래스(Student)를 만드시오.
	(멤버변수:반,학번), 생성자, 기타함수
사람클래스로부터 상속받은 교수(Teacher)클래스를 만드시오.
	(멤버변수:전공,담당과목), 생성자, 기타함수
main함수에서 학생객체와, 교수객체를 만들어 테스트해보시오.
*/


#include <iostream>
using namespace std;
class Man {
protected:   // 상속해야되서 프라이벗은 안됨 
	string name;
	int age;
public:
	Man(string n, int a){
		name = n; age = a; 
	}
};


class Student : public Man {
	string ban;
	string num;
public:
	Student(string n, int a, string n2, string n3):Man(n,a)
	{
		name = n;
		age = a;
		ban = n2;
		num = n3;
	}

	void s_Show(){
		cout << "이름 :" << name << endl;
		cout << "나이 :" << age << endl;
		cout << "반 :" << ban << endl;
		cout << "학번 :" << num << endl;
	}
};

class Teacher : public Man {
	string major;
	string subject;
public:
	Teacher(string n, int a, string n2, string n3) :Man(n,a)
	{
		name = n;
		age = a;
		major = n2;
		subject = n3;
	}

	void t_Show() {
		cout << "이름 :" << name << endl;
		cout << "나이 :" << age << endl;
		cout << "전공 :" << major << endl;
		cout << "담당과목 :" << subject << endl;
	}
};

int main(void) {
	Student kks("김컴소", 25, "D반", "200012000");
	Teacher hsh("한성현", 40, "전산", "객체지향프로그래밍");

	kks.s_Show();
	hsh.t_Show();
}

