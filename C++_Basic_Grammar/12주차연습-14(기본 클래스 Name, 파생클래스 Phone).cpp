#include <iostream>
using namespace std;
#include <string>
class Name{   //기본 클래스는 이름만 처리
	string name;
public :
	void Get_name(string s) { name = s;}
	void Print_name() {cout<<name<<"의 전화번호는";}
};

class Phone: public Name{ //파생클래스는 전화번호처리
	string phone;
public:
    void Get_phone(string s) {phone = s;}
	void Print_phone(){ 
		Print_name();
   		cout<<phone;
    }
};
int main(void)
{
  Phone h;
  h.Get_name("Han S.H.");
  h.Get_phone("1234-5678");
  h.Print_phone();
}

/*

Han S.H.의 전화번호는1234-5678
상속을 이용하여 기존의 Name 클래스를 
 재사용할 수 있고, 중복되는 코드는 줄일 수 있다.  

*/ 
