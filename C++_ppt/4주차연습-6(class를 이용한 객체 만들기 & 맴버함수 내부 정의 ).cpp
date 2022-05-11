#include <iostream>
using namespace std;
class Dog{ //클래스 이름은 대문자로 시작                      
private: 
    int age;
    double w;
public:
    int getw(){ //값을 리턴하는 함수     ** 멤머함수들을 내부정의 하는 소스코드임  **
        return w;
    }
    void setw(double w1){ // 매개변수 같은 w 입력하면컴파일러가 햇갈려함 다른이름 으로하자 값을 셋팅하는 함수 
        w=w1;                    
    }
    
    int getAge(){
        return age;
    }
    void setAge(int a){
        age=a;
    }
}; // 세미콜론 필수임 꼭 써야됨 조심하장     

//클래스는 재활용가능 캡슐로 묶여있어서 모든 변수 선언 동작들이 클래스 내부에 선언이 되어있고 처리 됨  

int main()
{
   Dog happy;
   happy.setAge(1);
   cout << "나이:" << happy.getAge() << endl;
   
   happy.setw(10.5);
   cout << "몸무게:" << happy.getw() << endl;
   
   Dog happy1;
   happy.setAge(2);
   cout << "나이:" << happy.getAge() << endl;
   
   happy.setw(20.5);
   cout << "몸무게:" << happy.getw();
                                        
   return 0;
}

/* 결과  
나이:1
몸무게:10
나이:2
몸무게:20
--------------------------------
Process exited after 0.08236 seconds with return value 0
계속하려면 아무 키나 누르십시오 . . .
*/
