#include<iostream>
#include <stdint.h>
#include <string.h>
#include <fstream>

#define NAME_SIZE 32
#define STUDENT_MAX 20
#define Professor_MAX 10
#define ADDRESS_SIZE 128
#define PHONE_SIZE 15
#define Classnum_SIZE 15
#define Class_SIZE 10
#define Club_SIZE 20
#define Major_SIZE 20
#define subject_SIZE 200
using namespace std;
  

struct _Student  // 학생 구조체 
{
    char strName[NAME_SIZE];        
    char strAddress[ADDRESS_SIZE];    
    char strPhone[PHONE_SIZE];         
    char strClassnum[Classnum_SIZE]; // 학번 
    char strClass[Class_SIZE]; // 현제 학년  
    char strClub[Club_SIZE];
    int iNumber; // 학생 일련 번호 
 /* int iKor;
    int iEng;
    int iMath;
    int iTotal;
    float fAvg; */
};

struct _Professor  // 교수 구조체 
{
    char strName[NAME_SIZE];               
    char strMajor[Major_SIZE];    // 전동  
    char strPhone[PHONE_SIZE];    
	char strClub[Club_SIZE]; // 담당 동아리
	     
    char str_first_grader[subject_SIZE]; // 학년 별 담당 과목  
    char str_second_grader[subject_SIZE];
    char str_third_grader[subject_SIZE]; 
    char str_fourth_grader[subject_SIZE]; 
    int iNumber; 

};  

enum MENU  // 열거 형 https://m.blog.naver.com/PostView.nhn?blogId=kimjd921&logNo=40197077518&proxyReferer=https%3A%2F%2Fwww.google.com%2F
{
    MENU_NONE,      // 자동으로 0 ~  5
    MENU_INSERT,
    MENU_MODIFY,
    MENU_DELETE,
    MENU_SEARCH,
    MENU_OUTPUT,
    MENU_EXIT
};

int main()
{
  	char S_or_P;
    cout << "\n\n                           컴퓨터 소프트웨어학과 학생, 교수 정보관리 프로그램 입니다 \n" << endl;
    cout << "                                학생 관리 'S'  교수 관리 'P' key를 눌러 주세요 " << endl ;
    cin >> S_or_P; 
   
     
    _Student StudentArr[STUDENT_MAX] = {};  // 10명의 학생을 담을 수 있게 초기화  
    char strName[NAME_SIZE] = {};  // 이름 문자열 초기화 34만큼 들어감 
    int iStudentCount = 0;  // 학생수 ( 생성 할 때마다 1 식 증가 10 넘어가면 종료) 
    int iStdNumber = 1;
    
	_Professor ProfessorArr[Professor_MAX] = {}; 
    char strName2[NAME_SIZE] = {};
    int iProfessorCount = 0;  
    int iproNumber = 1;
    
    
    
    ofstream hin("Professor_Information.txt");  // 입력파일 스트림 객체 hin 선언
	if(!hin){
	  cout<<"입력할 파일을 열 수 없습니다.";
        return 1;
	}

	
  	ofstream hout("Student_Information.txt"); 
	
			if (!hout) { // 못 불러오면 출력됨   
				cout << "입력할 파일을 열 수 없습니다.";
				return 1;
		    }  
	

    if (S_or_P == 'S')
    while (true)
    {
    	
        cout << " 1. 학생 등록 : " << endl;
        cout << " 2. 학생 수정 : " << endl;
        cout << " 3. 학생 삭제 : " << endl;
        cout << " 4. 학생 탐색 : " << endl;
        cout << " 5. 학생 출력 :   " << endl;
        cout << " 6. 종료 " << endl;
        cout << " 메뉴를 선택하세요 : " ;
  
        int iMenu;
        cin >> iMenu;
  
        if (cin.fail())  // 비정상 입력시 입력 받은 것을 지우고 위로 올라감 
        {               // https://m.blog.naver.com/PostView.nhn?blogId=lyw94k&logNo=220858647150&proxyReferer=https%3A%2F%2Fwww.google.com%2F
            cin.clear(); 
  
            continue;
        }
        
        if (iMenu == MENU_EXIT) // 5일때 종료
		{
            hout.close();  // 파일종료를 여기다 해줘야 계속 입력 되도 저장됨 프로그램이 종료될때 한번에 입력 되기 때문 
			break;
        }
  
        switch (iMenu)
        {
        case MENU_INSERT:  // 1 입력 받으면 
  		{
            
            cout << " \n ==========학생정보 입력=============" << endl;
  
            if (iStudentCount == STUDENT_MAX)
                break;
  
            //학생정보 학번 , 이름 , 주소 , 전화번호
            //국어,영어,수학점수는 입력받음 학번, 총점, 평균은 연산을 통해 계산.
  
            cout << "이름 :";
            cin >> StudentArr[iStudentCount].strName;  // 0 번째 학생 의 이름 부터 정보 입력 됨 
  
            cin.ignore(1024, '\n'); // https://m.blog.naver.com/PostView.nhn?blogId=lyw94k&logNo=220859905348&proxyReferer=https%3A%2F%2Fwww.google.com%2F
                                    // 버퍼 처리       
            cout << "학번 : ";
            cin.getline(StudentArr[iStudentCount].strClassnum, Classnum_SIZE);                        
                                    
            cout << "현제 학년  : ";
            cin.getline(StudentArr[iStudentCount].strClass, Class_SIZE);   
            
            cout << "현제 동아리 (없으면 숫자0 입력) : ";
            cin.getline(StudentArr[iStudentCount].strClub, Club_SIZE);   
			                        
            cout << "주소 : ";
            cin.getline(StudentArr[iStudentCount].strAddress, ADDRESS_SIZE);
  			// https://koodaehyon.blog.me/221580716906
  			
            cout << "전화번호 (예시 000-0000-0000) : ";
            cin.getline(StudentArr[iStudentCount].strPhone, PHONE_SIZE);
            
  
            StudentArr[iStudentCount].iNumber = iStdNumber;   // 학생 검색시 필요한 일련 번호를 입력 해준것임 
  		
		  
		  	// 파일에 데이터 저장
            hout << "     학생 정보     "  << endl; 
			hout << "이름 : " << StudentArr[iStudentCount].strName << endl;
			hout << "학번 : " << StudentArr[iStudentCount].strClassnum << endl;
			hout << "현제 학년  : " << StudentArr[iStudentCount].strClass << endl;
			hout << "현제 동아리 (없으면 숫자0 입력) : " << StudentArr[iStudentCount].strClub << endl;
			hout << "주소 : " << StudentArr[iStudentCount].strAddress << endl;
			hout << "전화번호 (예시 000-0000-0000) : " << StudentArr[iStudentCount].strPhone << endl;
			hout << "학생 일련번호 : " << StudentArr[iStudentCount].iNumber << endl << endl;
			
  			
  			
            ++iStdNumber;
            ++iStudentCount;
            
            
  			
            cout << "학생 추가 완료. \n" << endl;
  			break;
     }
		
		case MENU_MODIFY:
		cout << "\n =======================수정할 학생 ==================" << endl;
			
			cin.ignore(1024, '\n');
            cout << "수정할 이름을 입력 : ";
            cin.getline(strName, NAME_SIZE);	
            
            for (int i = 0; i < iStudentCount; ++i) // 현제 입력 되어 있는 학생 수 만큼 반복  
            {
                if (strcmp(StudentArr[i].strName, strName) == 0) // 참이면 둘이 같을 때 0을 배출함  
                {
            	cout << "수정 이름 :";
            	cin >> StudentArr[i].strName; 
  				cin.ignore(1024, '\n');      
            	cout << "수정 학번 : ";
            	cin.getline(StudentArr[i].strClassnum, Classnum_SIZE);                        
                                    
            	cout << "수정 학년  : ";
            	cin.getline(StudentArr[i].strClass, Class_SIZE);   
            
           		cout << "수정 동아리 (없으면 숫자0 입력) : ";
            	cin.getline(StudentArr[i].strClub, Club_SIZE);   
			                        
            	cout << "수정 주소 : ";
            	cin.getline(StudentArr[i].strAddress, ADDRESS_SIZE);
  				// https://koodaehyon.blog.me/221580716906
  			
            	cout << "수정 전화번호 (예시 000-0000-0000) : ";
            	cin.getline(StudentArr[i].strPhone, PHONE_SIZE);
            
           	 StudentArr[i].iNumber = StudentArr[i].iNumber;   // 학생 검색시 필요한 일련 번호를 입력 해준것임 
           	
			 hout << " -----------수정한 학생 정보 --------------- "  << endl; 
           	hout << "  수정 학생 정보  "  << endl; 
			hout << "수정 이름 : " << StudentArr[i].strName << endl;
			hout << "수정 학번 : " << StudentArr[i].strClassnum << endl;
			hout << "수정 학년  : " << StudentArr[i].strClass << endl;
			hout << "현제 동아리 (없으면 숫자0 입력) : " << StudentArr[i].strClub << endl;
			hout << "수정 주소 : " << StudentArr[i].strAddress << endl;
			hout << "수정 전화번호 (예시 000-0000-0000) : " << StudentArr[i].strPhone << endl;
			hout << "학생 일련번호 : " << StudentArr[i].iNumber << endl << endl;
			
           	 break;
        	}
        }
        break;
        
		case MENU_DELETE:
	    cout << "\n =======================삭제할 학생 ==================" << endl;
  
  
  
            cin.ignore(1024, '\n');
            cout << "삭제할 이름을 입력 : ";
            cin.getline(strName, NAME_SIZE);
  
            for (int i = 0; i < iStudentCount; ++i) // 현제 입력 되어 있는 학생 수 만큼 반복  
            {
                if (strcmp(StudentArr[i].strName, strName) == 0) // 참이면 둘이 같을 때 0을 배출함  
                {
                	 hout << " -----------삭제한 학생 정보--------------- "  << endl;
                        hout << "     학생 정보     "  << endl; 
						hout << "이름 : " << StudentArr[i].strName << endl;
						hout << "학번 : " << StudentArr[i].strClassnum << endl;
						hout << "현제 학년  : " << StudentArr[i].strClass << endl;
						hout << "현제 동아리 (없으면 숫자0 입력) : " << StudentArr[i].strClub << endl;
						hout << "주소 : " << StudentArr[i].strAddress << endl;
						hout << "전화번호 (예시 000-0000-0000) : " << StudentArr[i].strPhone << endl;
						hout << "학생 일련번호 : " << StudentArr[i].iNumber << endl << endl;
                    for (int j = i; j < iStudentCount - 1; ++j) // 그럼 학생 수(카운트) 를 하나 줄인 수 만 큼  반복   
                    {
                    	
                        StudentArr[i] = StudentArr[i + 1]; // 0  =  0+1 즉 다음 번째 배열이 내것으로 들어옴  차례대로 반복 되면서     
                    }
					                    
                    
           
                    --iStudentCount; // 최종적으로 학생 수를 하나 줄임 
  
                    cout << "학생을 삭제하였습니다.\n" << endl;
                    break;
                }
            }
            
            break;
            
            
        case MENU_SEARCH:
            
  
            cout << "\n =======================학생 탐색 ==================" << endl;
  
  
            cin.ignore(1024, '\n');
            cout << "탐색할 이름을 입력 : ";
            cin.getline(strName,NAME_SIZE);
  
            for (int i = 0; i < iStudentCount; ++i)
            {
                if (strcmp(StudentArr[i].strName, strName) == 0) // 비교해서 같은게 있음면 출력 
                {
                    cout << "이름 : " << StudentArr[i].strName << endl;
                    cout << "학번 : " << StudentArr[i].strClassnum << endl;                        
                    cout << "현제 학년  : " << StudentArr[i].strClass << endl;  
					cout << "현제 동아리 : " << StudentArr[i].strClub << endl;    
                    cout << "전화번호 : " << StudentArr[i].strPhone << endl;
                    cout << "주소 : " << StudentArr[i].strAddress << endl;
                    cout << "일련번호 : " << StudentArr[i].iNumber << endl << endl;
                    
                    
                    break;
                }
            }
  
  			break;
            
            
            
        case MENU_OUTPUT:
  
            cout << "\n =============학생출력 ============" << endl;
  
            for (int i = 0; i < iStudentCount; ++i)
            {
                cout << "이름 : " << StudentArr[i].strName << endl;
                cout << "학번 : " << StudentArr[i].strClassnum << endl;                        
                cout << "현제 학년  : " << StudentArr[i].strClass << endl;
				cout << "현제 동아리 : " << StudentArr[i].strClub << endl;      
                cout << "전화번호 : " << StudentArr[i].strPhone << endl;
                cout << "주소 : " << StudentArr[i].strAddress << endl;
                cout << "일련번호 : " << StudentArr[i].iNumber << endl <<endl;
            
            }
  
  
            break;
            
        default:  // else 랑 같음  
            cout << "메뉴를 잘못 선택했습니다. " << endl;
            break;
        }
        
		
    }
  
   		// ------------------------------------------------------------------------------------------------------------------------- 
   		
   		
   		if (S_or_P == 'P')
    while (true)
    {
        cout << " 1. 교수 등록 : " << endl;
        cout << " 2. 교수 수정 : " << endl;
        cout << " 3. 교수 삭제 : " << endl;
        cout << " 4. 교수 탐색 : " << endl;
        cout << " 5. 교수 출력 :   " << endl;
        cout << " 6. 종료 " << endl;
        cout << " 메뉴를 선택하세요 : ";
  
        int iMenu;
        cin >> iMenu;
  
        if (cin.fail())  
        {               
            cin.clear(); 
  
            continue;
        }
        
        if (iMenu == MENU_EXIT) 
        {
        	hin.close();
        	break;
		}
            
  
        switch (iMenu)
        {
        case MENU_INSERT:  
  
            
            cout << "\n  ==========교수정보 입력=============" << endl;
  
            if (iProfessorCount == Professor_MAX)
                break;
  
  
            cout << "이름 :";
            cin >> ProfessorArr[iProfessorCount].strName;  
  
            cin.ignore(1024, '\n'); 
                                    
            cout << "전공 : ";
            cin.getline(ProfessorArr[iProfessorCount].strMajor, Classnum_SIZE);                        
                                    
            cout << "담당 동아리 : ";
            cin.getline(ProfessorArr[iProfessorCount].strClub, Club_SIZE);   
			                        
            cout << "'예시 C++, C, 서버프로그래밍(담당 과목이 없으면 0 을 입력하세요.)'\n1학년 담당 과목 : ";
            cin.getline(ProfessorArr[iProfessorCount].str_first_grader, subject_SIZE);
  			
  			cout << "2학년 담당 과목 : ";
            cin.getline(ProfessorArr[iProfessorCount].str_second_grader, subject_SIZE);
            
            cout << "3학년 담당 과목 : ";
            cin.getline(ProfessorArr[iProfessorCount].str_third_grader, subject_SIZE);
            
            cout << "4학년 담당 과목 : ";
            cin.getline(ProfessorArr[iProfessorCount].str_fourth_grader, subject_SIZE);
  			
            cout << "전화번호(예시 000-0000-0000) : ";
            cin.getline(ProfessorArr[iProfessorCount].strPhone, PHONE_SIZE);
  
            ProfessorArr[iProfessorCount].iNumber = iproNumber;   // 학생 검색시 필요한 일련 번호를 입력 해준것임 
            
            hin << "     교수 정보     "  << endl; 
			hin << "이름 : " << ProfessorArr[iProfessorCount].strName << endl;
			hin << "전공 : " << ProfessorArr[iProfessorCount].strMajor << endl;
			hin << "담당 동아리 (없으면 숫자0 입력) : " << ProfessorArr[iProfessorCount].strClub << endl;
			hin << "1학년 담당 과목 : " << ProfessorArr[iProfessorCount].str_first_grader << endl;
			hin << "2학년 담당 과목 : " << ProfessorArr[iProfessorCount].str_second_grader << endl;
			hin << "3학년 담당 과목 : " << ProfessorArr[iProfessorCount].str_third_grader << endl;
			hin << "4학년 담당 과목 : " << ProfessorArr[iProfessorCount].str_fourth_grader << endl;
			hin << "전화번호 (예시 000-0000-0000) : " << ProfessorArr[iProfessorCount].strPhone << endl;
			hin << "교수 일련번호 : " << ProfessorArr[iProfessorCount].iNumber << endl << endl;
  
  
            ++iproNumber;
            ++iProfessorCount;
  
            cout << "교수 추가 완료 \n" << endl;
  			break;
        
		case MENU_MODIFY:
		cout << "\n =======================수정할 교수 ==================" << endl;
			
			cin.ignore(1024, '\n');
            cout << "수정할 교수를 입력 : ";
            cin.getline(strName, NAME_SIZE);	
            
            for (int i = 0; i < iProfessorCount; ++i) // 현제 입력 되어 있는 학생 수 만큼 반복  
            {
                if (strcmp(ProfessorArr[i].strName, strName) == 0) // 참이면 둘이 같을 때 0을 배출함  
                {
            	 cout << "수정 이름 :";
            	 cin >> ProfessorArr[i].strName;  
  				 cin.ignore(1024, '\n'); 
                                    
            	 cout << "수정 전공 : ";
            	 cin.getline(ProfessorArr[i].strMajor, Classnum_SIZE);                        
                                    
            	 cout << "수정 담당 동아리 : ";
            	 cin.getline(ProfessorArr[i].strClub, Club_SIZE);   
			                        
            	 cout << "'예시 C++, C, 서버프로그래밍(담당 과목이 없으면 0 을 입력하세요.)'\n수정 1학년 담당 과목 : ";
            	 cin.getline(ProfessorArr[i].str_first_grader, subject_SIZE);
  			
  				 cout << "수정 2학년 담당 과목 : ";
           		 cin.getline(ProfessorArr[i].str_second_grader, subject_SIZE);
            
           		 cout << "수정 3학년 담당 과목 : ";
            	 cin.getline(ProfessorArr[i].str_third_grader, subject_SIZE);
            
            	 cout << "수정 4학년 담당 과목 : ";
            	 cin.getline(ProfessorArr[i].str_fourth_grader, subject_SIZE);
  			
            	 cout << "수정 전화번호(예시 000-0000-0000) : ";
            	 cin.getline(ProfessorArr[i].strPhone, PHONE_SIZE);
  
  		        ProfessorArr[i].iNumber = ProfessorArr[i].iNumber;   
  		    	
				hin << " ----------- 수정한 교수 정보 --------------- "  << endl;     
  		    	hin << "   수정 교수 정보     "  << endl; 
				hin << "수정 이름 : " << ProfessorArr[i].strName << endl;
				hin << "수정 전공 : " << ProfessorArr[i].strMajor << endl;
				hin << "수정 담당 동아리 (없으면 숫자0 입력) : " << ProfessorArr[i].strClub << endl;
				hin << "수정 1학년 담당 과목 : " << ProfessorArr[i].str_first_grader << endl;
				hin << "수정 2학년 담당 과목 : " << ProfessorArr[i].str_second_grader << endl;
				hin << "수정 3학년 담당 과목 : " << ProfessorArr[i].str_third_grader << endl;
				hin << "수정 4학년 담당 과목 : " << ProfessorArr[i].str_fourth_grader << endl;
				hin << "수정 전화번호 (예시 000-0000-0000) : " << ProfessorArr[i].strPhone << endl;
				hin << "교수 일련번호 : " << ProfessorArr[i].iNumber << endl << endl;
           		break;
        	}
        }
        break;
		
		case MENU_DELETE:
	    cout << "\n =======================삭제할 교수 ==================" << endl;
  
  
  
            cin.ignore(1024, '\n');
            cout << "삭제할 이름을 입력 : ";
            cin.getline(strName, NAME_SIZE);
  
            for (int i = 0; i < iProfessorCount; ++i) // 현제 입력 되어 있는 학생 수 만큼 반복  
            {
                if (strcmp(ProfessorArr[i].strName, strName) == 0) // 참이면 둘이 같을 때 0을 배출함  
                {
                	 hin << " ----------- 삭제한 교수 정보  --------------- "  << endl;
                    hin << "     교수 정보     "  << endl; 
					hin << "이름 : " << ProfessorArr[i].strName << endl;
					hin << "전공 : " << ProfessorArr[i].strMajor << endl;
					hin << "담당 동아리 (없으면 숫자0 입력) : " << ProfessorArr[i].strClub << endl;
					hin << "1학년 담당 과목 : " << ProfessorArr[i].str_first_grader << endl;
					hin << "2학년 담당 과목 : " << ProfessorArr[i].str_second_grader << endl;
					hin << "3학년 담당 과목 : " << ProfessorArr[i].str_third_grader << endl;
					hin << "4학년 담당 과목 : " << ProfessorArr[i].str_fourth_grader << endl;
					hin << "전화번호 (예시 000-0000-0000) : " << ProfessorArr[i].strPhone << endl;
					hin << "교수 일련번호 : " << ProfessorArr[i].iNumber << endl << endl;
                    for (int j = i; j < iProfessorCount - 1; ++j) // 그럼 학생 수(카운트) 를 하나 줄인 수 만 큼  반복   
                    {
                        ProfessorArr[i] = ProfessorArr[i + 1]; // 0  =  0+1 즉 다음 번째 배열이 내것으로 들어옴  차례대로 반복 되면서  
                        
                    }
                    
                    
					
                    --iProfessorCount; // 최종적으로 학생 수를 하나 줄임 
  					cout << "교수를 삭제하였습니다.\n" << endl;
                    
                    break;
                }
            }
            
            break;
            
            
        case MENU_SEARCH:
            
  
            cout << "\n=======================교수 탐색 ==================" << endl;
  
  
            cin.ignore(1024, '\n');
            cout << "탐색할 이름을 입력 : ";
            cin.getline(strName,NAME_SIZE);
  
            for (int i = 0; i < iProfessorCount; ++i)
            {
                if (strcmp(ProfessorArr[i].strName, strName) == 0) // 비교해서 같은게 있음면 출력 
                {
                    cout << "이름 : " << ProfessorArr[i].strName << endl;
                    cout << "전공 : " << ProfessorArr[i].strMajor << endl;                        
                    cout << "담당 동아리 : " << ProfessorArr[i].strClub << endl;  
                    cout << "전화번호 : " << ProfessorArr[i].strPhone << endl;
                    cout << "1학년 담당 과목 : " << ProfessorArr[i].str_first_grader << endl;
                     cout << "2학년 담당 과목 : " << ProfessorArr[i].str_second_grader << endl;
                      cout << "3학년 담당 과목 : " << ProfessorArr[i].str_third_grader << endl;
                       cout << "4학년 담당 과목 : " << ProfessorArr[i].str_fourth_grader << endl << endl;
                    
                    
                    break;
                }
            }
  
  			break;
            
            
            
        case MENU_OUTPUT:
  
            cout << "\n=============교수 출력 ============" << endl;
  
            for (int i = 0; i < iProfessorCount; ++i)
            {
                cout << "이름 : " << ProfessorArr[i].strName << endl;
                cout << "전공 : " << ProfessorArr[i].strMajor << endl;                        
                cout << "담당 동아리 : " << ProfessorArr[i].strClub << endl;  
                cout << "전화번호 : " << ProfessorArr[i].strPhone << endl;
                cout << "1학년 담당 과목 : " << ProfessorArr[i].str_first_grader << endl;
                 cout << "2학년 담당 과목 : " << ProfessorArr[i].str_second_grader << endl;
                  cout << "3학년 담당 과목 : " << ProfessorArr[i].str_third_grader << endl;
                   cout << "4학년 담당 과목 : " << ProfessorArr[i].str_fourth_grader << endl << endl;
            
            }
  
  
            break;
            
        default:  // else 랑 같음  
            cout << "메뉴를 잘못 선택했습니다. " << endl;
            break;    
        }
    }
}
    
  
