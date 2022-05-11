#include <iostream>
using namespace std;

int main()
{
	cout << "디폴트\n";
	cout << 100 << ':' << -50 << endl;   //100:-50
	cout << 0.5 << ':' << 100.123 << endl;//0.5:100.123
	cout.unsetf(ios::dec);
	cout.setf(ios::hex | ios::showbase | ios::uppercase);
	cout << "hex, showbase, uppercase\n";
	cout << 100 << ':' << -50 << endl;  //0X64:0XFFFFFFCE
	cout.setf(ios::scientific);
	cout << "scientific\n";
	cout << 0.5 << ':' << 100.123 << endl;//5.000000E-001:1.00123E+002
	cout.setf(ios::fixed | ios::showpoint);
	cout << "fixed, showpoint\n";
	cout << 0.5 << ':' << 100.123 << endl; //0.500000:100.123
	cout.unsetf(ios::hex | ios::showpoint);
	cout << "hex, showpoint unsetting\n";
	cout << 100 << ':' << -50 << endl; //100:-50
	cout << 0.5 << ':' << 100.123 << endl;//0.5:100.123

}

/*

디폴트
100:-50
0.5:100.123
hex, showbase, uppercase
0X64:0XFFFFFFCE
scientific
5.000000E-001:1.001230E+002
fixed, showpoint
0.500000:100.123
hex, showpoint unsetting
100:-50
0.5:100.123

*/
