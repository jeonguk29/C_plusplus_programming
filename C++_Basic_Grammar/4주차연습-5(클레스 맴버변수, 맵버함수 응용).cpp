#include <iostream>

using namespace std;
class Dog{   // 클레스 생성 
private:     // 클레스 내부 전용 속성  
    int age;   // 클레스 내부에서만 사용 가능 맴버변수 
public:         // 클레스 범용 전용 속성   
    int getAge(){   // 클레스 외부에서도 사용 가능 멤버함수(이 함수를 통해 멤버 변수 접근 가능) 
        return age;
    }
    void setAge(int a){       // getAge() 일반적으로 값을 입력 출력하는 함수  setAge()일반적으로 값을 입력 받는 함수 
        age=a;
    }
    
}; // 세미콜론 필수임 꼭 써야됨 조심하장 

int main()
{
   Dog happy;
   happy.setAge(1);
   cout << "나이:" << happy.getAge();
   
   return 0;
}

