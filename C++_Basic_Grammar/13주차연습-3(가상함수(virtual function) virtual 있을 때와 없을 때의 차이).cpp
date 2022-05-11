#include <iostream>
using std::cout;

class Dot
{
public:
   virtual void Draw() { cout << "Dot::Draw()\n"; }
   //void Draw() { cout << "Dot::Draw()\n"; }
   void Print();

   //virtual 있을때랑 없을 때랑 결과가 다름 
};
void Dot::Print()
{
   cout << "기초클래스\n";
   Draw();
}
class Line :public Dot
{
public:
   void Draw() { cout << "Line::Draw()\n"; }
};

int main(void)
{
   Line line;
   line.Print();
}
