#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>           // sscanf()함수
#include <iostream>
using std::cout;
using std::endl;

class Date {
	int day, month, year;
public:
	Date(const char* s) { sscanf(s, "%d%*c%d%*c%d", &month, &day, &year); }
	Date(int m, int d, int y) { day = d; month = m; year = y; }
	void print() { cout << year << "년 " << month << "월 " << day << "일" << endl; }
};

int main(void)
{
	Date d1("3/1/2010");
	Date d2(3, 1, 2010);
	d1.print();
	d2.print();
	
	return 0;
}


//맨위 다파인 필요 안전하지 않은 함수라 스트링 스켄함수 임 
//sscanf 입력한 문자열을 내가 원하는 대로 가공 할수 있음    %*c 문자를 입력 받아 무시

/*
2010년 3월 1일
2010년 3월 1일
*/





