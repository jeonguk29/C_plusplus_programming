#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	cout << "Without a field width set:\n";
	cout << "abcdefg\n";
	cout << 12345 << endl;
	cout << 123.45 << endl;
	cout << "With a 10-character field width set:\n";
	cout << setfill('*');   // cout << setfill(' '); 원상복구
	cout << setw(10) << "abcdefg" << endl;
	// setw() 조작자는 cout에서만 작동한다
	cout << setw(10) << 12345 << endl;
	cout << setw(10) << 123.45 << endl;
}

/*
결과 

Without a field width set:
abcdefg
12345
123.45
With a 10-character field width set:
***abcdefg
*****12345
****123.45 



*/
