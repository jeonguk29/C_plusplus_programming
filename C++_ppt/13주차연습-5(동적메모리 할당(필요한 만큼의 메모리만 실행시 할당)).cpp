#include <iostream>
#include <stdlib.h>
using std::cout;
using std::cin;

int main(void)
{
  int i,n;
  int * num;
  cout << "몇 개의 숫자를 입력하시겠습니까? ";
  cin>>i;

  num= new int[i];
  if (num == NULL) exit (1); 
  for (n=0; n<i; n++)
  {
    cout << "숫자를 입력하십시오 : ";
	cin>>num[n];
  }
  cout << "당신이 입력한 숫자는: ";
  for (n=0; n<i; n++)
    cout << num[n] << ", ";
  delete[] num;
}

