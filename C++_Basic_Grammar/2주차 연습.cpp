#include <iostream>
using namespace std; // 다같은 std에서 와서 이게 가장 남 (이렇게 쓰면 계속 선언 안해도됨 )
//using std::cout; // 방법은 3가지다 
//using std::cin;
//using std::endl;  \n이랑 똑같은것임 
int main()
{
	int x;
	cin >> x;
	cout << "입력받은 수는" << x <<"입니다"<< endl;
    std::cout << "Hello World!\n";
    // std:: 여기서 계속 선언을 해주면서 출력을 해줘야 함 
   // (어느동네 에서 온친구인지 알려주는거)
	return 0;
}

/*

#include <iostream>
// using namespace std;          방법 1 
using std::cin;               // 방법 2  
int main (void)
{
	int a;
	cin>>a;
    std:: cout << "a=" << a <<"\n"; // 방법 3 
	return 0;
}

*/
