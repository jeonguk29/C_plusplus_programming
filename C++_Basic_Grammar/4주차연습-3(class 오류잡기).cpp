#include <iostream>
class Dog{
	public:
	int age;
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
    
    
	클래스 만드는법과 객체 생성 하는 법  
    
    class Integer{    	//  Integer라는 이름의 class      
   	private:             	//  속성
    	int val;     	//  멤버변수, private 속성
    public:		//이 줄 이하는 public속성
        int GetVal(); 	//  멤버함수,  출력
        int SetVal(); 	//  멤버함수 , 입력
  	}Val1;             //  ① 객체를 만드는(정의) 첫 번째 방법
 
  	Integer Val2;  //  ② 객체를 만드는 두 번째 방법

	*/
	return 0;
}
