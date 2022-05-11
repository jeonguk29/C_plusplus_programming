//Cat.cpp
#include "cat.h"

int Cat::GetAge()
{
	return Age;
}
void Cat::SetAge(int age)
{
	Age = age;
}
void Cat::SetName(string pName)
{
	Name = pName;
}
string Cat::GetName()
{
	return Name;
}
int main()
{
	Cat Nabi;
	Nabi.SetName("나비");
	Nabi.SetAge(3); //입력
	cout << Nabi.GetName() << " 나이는 "
		<< Nabi.GetAge() << "살이다.";
}

// 결과 : 나비 나이는 3살이다. 
