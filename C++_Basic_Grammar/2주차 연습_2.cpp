#include <iostream>
using std::cout; 
using std::endl; 
int main(void)
{
    int a=10;
    cout << 'a' << endl; //'a' 이러면 변수a가 아니라 출력해라 a 문자  "" = 이건 문자열  
    cout<<a;
    
    cout << endl;
    
    // cast 연산자 이미 지정된 데이터형을 다른 데이터형으로 강제로 바꾸고자 할 때 사용
    int x=10,y=4;
	double z;           
	z=(double)x/y; // z 값은?  = 2.5
	cout << z;
    z=x/y;  //이 경우 z에는 무엇이 저장될까? = 2
    cout << endl;
	 
    cout<<(int)'A'<<(char)65; // 65 A 로 출력 됨  
    


    
    return 0;
}

