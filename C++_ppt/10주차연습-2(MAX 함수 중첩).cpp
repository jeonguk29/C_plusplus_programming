#include <iostream>
using std::cout;
using std::endl;

int Max(int i, int j)
{
    return i>j ?i:j;
}
double Max(double i, double j)
{
   return i>j ?i:j;
}
char Max(char i, char j)
{
   return i>j ?i:j;
}
int main(void)
{
  cout<< "Max값은=" << Max(1,2)<<endl;
  cout<< "Max값은=" << Max(7.5,3.6)<<endl;
  cout<< "Max값은=" << Max('A','B');
}

/* 결과 
Max값은=2
Max값은=7.5
Max값은=B
*/
