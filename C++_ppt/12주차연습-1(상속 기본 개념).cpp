#include <iostream>
using namespace std;

class A {

public:
	void aa() {
		cout << "aaa\n";
	}
};

class B :public A { //부모 A클래스로 부터 상속받은 자식 B클래스 
					// :: 범위 지정 연산자 : 상속을 나타냄 
};

int main()
{
	A han;
	B kim;
	han.aa();
	kim.aa();
}

