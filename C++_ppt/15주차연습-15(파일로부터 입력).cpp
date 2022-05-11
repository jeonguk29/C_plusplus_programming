#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream hin("test.txt");  // 입력파일 스트림 객체 hin 선언
	if (!hin) {
		cout << "입력할 파일을 열 수 없습니다.";
		return 1;
	}
	char str[50];
	int i, j;

	hin >> str >> i >> j;
	cout << str << "   " << i << "   " << j << endl;
	hin.close();          // 파일 종결
	return 0;
}

// 결과 : HanS.H.   100   64 
