// 시험 100중 20점 짜리  

#include <iostream>
#include <vector>      // vector container
#include <algorithm>  // sort
#include <functional>  // 함수자 less<>, greater<>
using namespace std;
int main()
{
	vector<int> v(5);  //vector container  방 4대 아무 것도 없으면 빈방 
	cout << v.size() << " : " << v.capacity() << endl;  //5 :5
	//capacity는 할당된 메모리 공간의 크기, size는 저장된 데이터 요소의 개수
	for (int i = 0; i < v.size(); i++) cout << v[i] << ' '; //0 0 0 0 0 기본적으로 초기화됨 0으로 
	cout << endl;
	
	
	for (int i = 0; i < v.size(); i++) v[i] = i + 1;
	for (int i = 0; i < v.size(); i++) cout << v[i] << ' '; //1 2 3 4 5    여기 배열  아래 포문이랑 같음 출력하는 기능은
	cout << endl;
	
	
	for (int i = 0; i < 5; i++) v.push_back(10 - i); // 여기서 10까지 늘어남 
	vector<int>::iterator iter;  //iterator                  #include <vector> 이안에서 가져옴 Iterator는 Container에 접근하는 객체
	for (iter = v.begin(); iter != v.end(); iter++)cout << *iter << ' '; // 끝이 아닐때 까지 그주소의 값이 나옴   != v.end() *iter
	// 1 2 3 4 5 10 9 8 7 6 
	
	sort(v.begin(), v.end());  cout << endl; //algorithm  오름차순 정렬 해주는 알고리즘 함수  
	for (iter = v.begin(); iter != v.end(); iter++)cout << *iter << ' ';
	// 1 2 3 4 5 6 7 8 9 10 
	
	sort(v.begin(), v.end(), greater<int>()); //functor : 함수자   greater<int>() 두 수를 비교하여 왼쪽이 크면 참 오른쪽이 크면 거짓 으로 하여 내림차순으로  
	cout << endl;                             // 바꿔주는 함 수  
	for (iter = v.begin(); iter != v.end(); iter++)cout << *iter << ' '; //여기 이터레이터를 이용한 방법  여기가 같은 포문 
	// 10 9 8 7 6 5 4 3 2 1
}


