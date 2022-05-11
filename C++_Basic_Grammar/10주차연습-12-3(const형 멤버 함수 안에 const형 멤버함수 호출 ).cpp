#include <iostream>
using std::cout;
class Dog{
  int age;
public:
  Dog(int a){age=a;}
  int getAge()const; 
 void setAge (int a){age=a;}
 void view()const  
 { cout<<"나는 view\n";}
};
int Dog::getAge() const
{
    view();
    return (age);
}
int main(void)
{
    const Dog happy(5); //const 객체
    //happy.setAge(7);      // 오류  실습 9주차연습-3  (const 객체 예) 보기  
    cout<<happy.getAge();
}

