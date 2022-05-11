// 함수중첩을 하는 2가지 경우

#include <iostream>
using std::cout;
using std::endl;


int add(int i, int j)
{
  return (i+j);
}
int add(int i, int j, int k)
{
  return (i+j+k);
}
int add(int i, int j, int k, int l)
{
  return (i+j+k+l);
}
float add(float i, float j)
{
  return (i+j);
}
double add(double i, double j)
{
  return (i+j);
}



int main(void)
{
	//매개변수의 형이 다른 경우
   cout<<add(1,2)<<endl;
   cout<<add(1.3f, 2.6f)<<endl;
   cout<<add(6.5, 3.8)<<endl;
   
   //매개변수의 개수가 다른 경우
   cout<<add(1,2)<<endl;
   cout<<add(1,2,3)<<endl;
   cout<<add(1,2,3,4)<<endl;
   
   // 매개변수의 형이나 개수가 다른 경우에는 무조건 오버로드 할 수 있다.
   // 리턴이 다르면 오버 로딩 안됨 

   return 0;
}





