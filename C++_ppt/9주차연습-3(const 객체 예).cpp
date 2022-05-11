#include <iostream>
using std::cout;
class Dog {
	int age;
public:
	Dog(int a) { age = a; }
	int getAge()const;
	void setAge(int a) { age = a; }
	void view()const
	{
		cout << "나는 view\n";
	}
};
int Dog::getAge() const
{
	view();
	return (age);
}

int main(void)
{
	const Dog happy(5); //const 객체       오류수정 1 Dog happy(5); 값이 바뀜  const지우면
	//happy.setAge(7);      오류 happy.setAge(7); 를 주석 처리함  객체가 const로 지정되면 해당 객체에 초기화된 데이터는 변경할 수 없으며
	// const로 지정된 멤버함수만 호출할 수 있다. 

	cout << happy.getAge();
}

