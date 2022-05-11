//Cat.h
#include <iostream>
#include <string>
using namespace std;
class Cat {
private:
	int Age;
	string Name;
public:
	int GetAge();
	string GetName();
	void SetAge(int age);
	void SetName(string pName);

}; // 보통 클레스 선언까지 헤더파일로 잡음 
