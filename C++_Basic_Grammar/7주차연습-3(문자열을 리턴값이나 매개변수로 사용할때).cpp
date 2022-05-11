#include <iostream>
#include <string.h> 
using std::cout;

int Double(int x)
{
	return (x * 2); //() 있어도 없어도 상관 없음
}

char Double1(int x)
{
	if (x == 1)return 'M';
	else return 'F';
}

const char* Double2(int x) // char* 에는 항상 어떤 곳이던 const 붙여야함 시험 
{
	if (x == 1)return "남성";
	else return "여성";
}

const char* Double3(char x)
{
	if (x == 'M')return "남성";
	else return "여성";
}
/*

const char* Double4(const char* x)
{
	if (x == "M")return "남성";       이렇게 쓰면 안됨 문자열 비교할때는
	else return "여성";
}

const char* Double4(const char* x)
{
	if (strcmp(x,"남")==0)return "남성";   이렇게 써줘야함 값이 0 이면 문자열끼리 같다는 뜻 
	else return "여성";
}
*/

const char* Double4(const char* x)
{
	if (!strcmp(x, "남"))return "남성";  // 같을때 0이나오면 거짓이 되서 안되니까 반전 시켜줘야함 1로 그러면 저렇게만 쓰면 코드가 깔끔해짐 
	else return "여성";                  // 위에라 똑같은 코드임 
}

int main(void)
{
	cout << Double(5);
	cout << Double1(2);
	cout << Double2(1);
	cout << Double3('M'); // 문자 보낼떄 ''꼭 필요함 
	cout << Double4("여");

	return 0;
}



