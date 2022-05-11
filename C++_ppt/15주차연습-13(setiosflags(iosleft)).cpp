#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	cout << "Without a field width set:\n";
	cout << 12345 << 67890 << 1234567890 << 1234567890 << 1234567890 << endl;
	cout << "Right-justified 10-character field width set:\n";
	cout << setw(10) << "abcdefg" << setw(10) << "abcdefg";
	cout << setw(10) << 12345 << setw(10) << 12345 << endl;
	cout << setw(10) << 123.45 << setw(10) << 123.45 << endl;
	cout << setiosflags(ios::left);
	cout << "Left-justified 10-character field width set:\n";
	cout << setw(10) << "abcdefg" << setw(10) << "abcdefg";
	cout << setw(10) << 12345 << setw(10) << 12345 << endl;
	cout << setw(10) << 123.45 << setw(10) << 123.45 << endl;
}

/*

Without a field width set:
1234567890123456789012345678901234567890
Right-justified 10-character field width set:
   abcdefg   abcdefg     12345     12345
    123.45    123.45
Left-justified 10-character field width set:
abcdefg   abcdefg   12345     12345
123.45    123.45

*/
