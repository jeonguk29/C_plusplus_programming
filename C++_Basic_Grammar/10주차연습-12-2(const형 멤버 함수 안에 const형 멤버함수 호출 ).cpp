#include <iostream>
using std::cout;
class Dog{
  int age;
public:
  int getAge() const; 
  void setAge(int a){age=a;}
  void view() {cout<<"나는 view";}
};
int Dog::getAge() const
{
  view();                   // 오류 ①
  return (++age);      // 오류 ②                  오류나는 소스임 
}
void main()
{
	 Dog happy;
     happy.setAge(5);
	  cout<<happy.getAge();
 }

