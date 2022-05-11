#include <iostream>
using std::cout;
using std::endl;
class Dog{
private:
	int age;
public:
	int getAge();
	void setAge(int a);
};
int Dog::getAge()
{
	return age;
}
void Dog::setAge(int a)
{
	age=a;
}
int main()
{
  Dog *dp;  
  dp=new Dog[10];     // 객체배열 할당
   //   Dog *dp=new Dog[10];
  if(!dp){
    cout<< "메모리할당이 되지 않았습니다.";
    return 1;
   }
   for(int i=0;i<10;i++)   // C++에서는 가능
     dp[i].setAge(i);
   for(int i=0;i<10;i++) 
     cout<< i<<"번째 객체의 나이는 " <<   
       dp[i].getAge()<<"입니다. " <<endl;
	
delete []dp;   //중요  이게 없으면 메모리 누수(memory leak) 이라고함 아무도 못쓰게 그공간을 차지중 컴퓨터 꺼야만 사라짐  
return 0;
}

/*
배열은 초기화 할때 [] 해제 할때도 []를 앞에 해줘야함 
안그러면 첫번째 방의 메모리만 해제됨 
*/
