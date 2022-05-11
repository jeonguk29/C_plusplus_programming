#include <iostream>
#include <string>
#include <stdlib.h>
using std::cout;

class Str{
  char *p;  //private멤버변수
public:
  Str(char *s);  //생성자
  ~Str(){delete []p;} //소멸자
  char *get(){return p;}
};
Str::Str(char *s)
{
  int l=strlen(s);
  p=new char[l+1];
   //NULL문자 고려
  if(!p){
        cout<<"Error";
        exit(1);
  }
  //strcpy(p,s);
  strcpy_s(p,l+1,s);
}
void main()
{
  Str ss("한성현");
  cout<<ss.get();
}

// strlen : 널 문자를 포함하지 않는 문자열의 길이를 리턴하는 함수
// strcpy_s(대상주소, 대상의길이, 원본주소);

// 수업 때는 안하고 넘어감  
