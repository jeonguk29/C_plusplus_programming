#include <iostream>
class Dog{
	int age; // 오류남 이게 캡슐화임  age, w는 오직 클레스에서만 가지고 놈 
	double w;
};

using std::cout;
using std::cin;
using std::endl;

int main (void)
{
	Dog soft;
	soft.age = 1;
	cout << "나이" << soft.age << "몸무게" << soft.w << endl;
	/*
	오류가 나는것을 보면 age, w는 오직 클레스에서만 가지고 놀수 있기 때문에 오류가 남 (캡슐화)
    하지만 public: 써주면 사용할수가 있음 public: 아래에 있는 변수들은 어떠한 함수에서도 접근이 가능해짐 
    
	*/
	return 0;
}
