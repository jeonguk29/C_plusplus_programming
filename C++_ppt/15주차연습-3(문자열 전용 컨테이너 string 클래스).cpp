//typedef basic_string<char> string;
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str = "안녕!";

	cout << str << endl;
	str.push_back('H');
	str.push_back('i');

	cout << str << endl; //안녕!Hi
	for (unsigned int i = 0; i < str.size(); i++)
		cout << str[i];
}

// 원래 c++에서는 string 형이 없음 STL에서 가져오는 것임  
