#include <iostream>
using std::cout;
using std::endl;
int add(int i, int j)
{
  cout<<i<<"+"<<j<<"=";
  return (i+j);
}
int add(int i, int j, int k)
{
  cout<<i<<"+"<<j<<"+"<<k<<"=";
  return (i+j+k);
}
int add(int i, int j, int k, int l)
{
  cout<<i<<"+"<<j<<"+"<<k<<"+"<<l<<"=";
  return (i+j+k+l);
}
int main(void)
{
   // 컴파일러가 실매개변수의 개수에 따라서 자동적으로 해당 함수를 연결해준다.  + 매개변수가 있고 없고 어떤 자료형 인지에 따라  
   cout<<add(1,2)<<endl;
   cout<<add(1,2,3)<<endl;
   cout<<add(1,2,3,4)<<endl;         

}

