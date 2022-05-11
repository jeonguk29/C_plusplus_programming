#include <iostream>
using std::cout;
int main()
{
   int* pi = new int;      // 메모리 할당

   if (!pi) {        // pi==0, 널 포인터인지 확인
      cout << "메모리할당이 되지 않았습니다.";
      return 1;  //비정상 종료시
   }
   *pi = 100;    //주소의 값으로 100을 할당
   cout << "메모리에 할당된 값은" << *pi << "입니다.\n";

   delete pi;            // 메모리 해제
   return 0;             // 정상 종료시
}

// new 메모리 할당할때 사용 되는 연산자
// delete 할당 받은 메모리를 해제 할때 사용하는 연산자 

