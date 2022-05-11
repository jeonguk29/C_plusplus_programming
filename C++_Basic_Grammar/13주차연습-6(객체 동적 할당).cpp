#include <iostream>
using std::cout;

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
   dp=new Dog;  // Dog *dp=new Dog   이렇게 한줄로 할 수 있음 
   if(!dp){
     cout<< "메모리할당 불가!";
     return 1;
   }

  dp->setAge(5);
  cout<<"메모리에 할당된 값은 "
             << dp->getAge() <<"입니다.";
	
  delete dp;
  return 0;
}

