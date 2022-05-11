#include <iostream>
using namespace std;
int main()
{
	cout << "디폴트\n";
	cout.width(10);
	cout << -50 << endl;

	cout << "[ * fill ]\n";
	cout.fill('*'); //cout.fill(' '); 이렇게 다시 해주면 돌아옴  
	cout.width(10); // 이건 하나 끝날때 마다 계속 해야만함 
	cout << -50 << endl;
	cout.width(10);
	cout << 100.25 << endl;
	cout.width(10);
	cout << "HanSH";
}

/*

디폴트
       -50
[ * fill ]
*******-50
****100.25
*****HanSH

*/

