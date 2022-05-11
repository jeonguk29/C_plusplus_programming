#include <iostream>
using std::cout;
class Dog{
private:
	int age;
public:
	int getAge(){return age;}
	void setAge(int a){age=a;}
};
int main()
{
     Dog dd[5];
     Dog *pd;
     pd=dd;    //배열의 이름은 그 배열의 시작주소이다.
	   for(int i=0;i<5;i++){  
         pd->setAge(i);
	       cout<<dd[i].getAge();
	       cout<<pd->getAge();
	       pd++;             //다음 방의 주소로
     }   //0011223344
     return 0;
}

