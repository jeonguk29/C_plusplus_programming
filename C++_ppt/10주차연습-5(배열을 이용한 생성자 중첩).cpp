#include <iostream>
using std::cout;
using std::endl;

class Dog{
private:
	int age;
public:
	Dog() {age=0;} 
   // 매개변수가 없는 생성자
	Dog(int a){age=a;}   
// 매개변수가 하나인 생성자
	~Dog();
	int getAge();
	void setAge(int a);
};
Dog::~Dog()
{
	cout<<"소멸\n";
}
int Dog::getAge()
{
      return age;
}
void Dog::setAge(int a)
{ 
      age=a; 
}
int main(void)
{
   Dog happy[5];
   Dog meri[5]={1,2,3,4,5};

   for(int i=0;i<5;i++)
        cout<<happy[i].getAge()<<
      ","<<meri[i].getAge()<<endl;
}

/*
0,1
0,2
0,3
0,4
0,5
소멸
소멸
소멸
소멸
소멸
소멸
소멸
소멸
소멸
소멸
*/
