#include <iostream>
#include <fstream>
using namespace std;

int main()
{                              // 	ofstream 파일 생성 객체 = 파일로 출력(파일 쓰기)하기 위한 스트림을 선언하는 클래스 없으면 만듬 
	ofstream hout("test.txt"); // 출력파일 스트림 객체 hout 선언  hout 없어도 됨 별명을 지어준거 그냥 변수  
	if (!hout) { // 못 불러오면 출력됨   
		cout << "출력할 파일을 열 수 없습니다.";
		return 1;
	}
	hout << "HanS.H.\n";
	hout << 100 << endl << hex << 100 << endl;
	hout.close();                 //파일 종결
	return 0;
}


