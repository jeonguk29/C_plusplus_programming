#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector <double> x;  // 더블형 배열로 잡음
	x.push_back(1.2); 
	x.push_back(2.5);
	x.push_back(3.3);
	for (int i = 0; i < x.size(); i++)
		cout << x[i] << endl;
}

/*
결과 
 
1.2
2.5
3.3

*/
