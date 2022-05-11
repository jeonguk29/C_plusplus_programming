#include <iostream> 
#include <vector> // #include <vector> 안에 템플릿 클레스등 다 들어 가있음 
using namespace std;
int main(void)
{   //현제 백터 인트형 배열로 만듯것 
	vector <int> x;  // <int> 이게 있으면 템플릿 클레스임  = int x [?]; 와 같은 것 백터는 크기가 늘어나는 배열 
	x.push_back(1);  // push_back(); vector에 값을 넣어주는 함수 
	x.push_back(2);
	for (int i = 0; i < x.size(); i++)
		cout << x[i] << endl;
}

/*
결과
1
2
*/
