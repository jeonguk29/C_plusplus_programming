#include<iostream>
#include <stdint.h>
#include <string.h>
using namespace std;
  
#define NAME_SIZE 32
#define STUDENT_MAX 10
#define ADDRESS_SIZE 128
#define PHONE_SIZE 15
  
struct _tagStudent 
{
    char strName[NAME_SIZE];
    char strAddress[ADDRESS_SIZE];
    char strPhone[PHONE_SIZE];
    int iNumber;
    int iKor;
    int iEng;
    int iMath;
    int iTotal;
    float fAvg;
};
  
enum MENU  
{
    MENU_NONE,
    MENU_INSERT,
    MENU_DELETE,
    MENU_SEARCH,
    MENU_OUTPUT,
    MENU_EXIT
};
  
  
int main()
{
  
    _tagStudent tStudentArr[STUDENT_MAX] = {};
    char strName[NAME_SIZE] = {};
    int iStudentCount = 0;
    int iStdNumber = 1;
  
  
    while (true)
    {
  
        cout << " 1. 학생 등록 : " << endl;
        cout << " 2. 학생 삭제 : " << endl;
        cout << " 3. 학생 탑색 : " << endl;
        cout << " 4. 학생 출력 :   " << endl;
        cout << " 5. 종료 " << endl;
        cout << " 메뉴를 선택하세요 : ";
  
        int iMenu;
        cin >> iMenu;
  
        if (cin.fail())
        {
            cin.clear();
  
            continue;
        }
  
  
  
  
        if (iMenu == MENU_EXIT)
            break;
  
        switch (iMenu)
        {
        case MENU_INSERT:
  
            
            cout << " ==========학생정보 입력=============" << endl;
  
            if (iStudentCount == STUDENT_MAX)
                break;
  
            //학생정보 학번 , 이름 , 주소 , 전화번호
            //국어,영어,수학점수는 입력받음 학번, 총점, 평균은 연산을 통해 계산.
  
            cout << "이름 :";
            cin >> tStudentArr[iStudentCount].strName;
  
            cin.ignore(1024, '\n');
  
            cout << "주소 : ";
            cin.getline(tStudentArr[iStudentCount].strAddress, ADDRESS_SIZE);
  
            cout << "전화번호 : ";
            cin.getline(tStudentArr[iStudentCount].strPhone, PHONE_SIZE);
  
            cout << "국어 : ";
            cin >> tStudentArr[iStudentCount].iKor;
            cout << "영어 : ";
            cin >> tStudentArr[iStudentCount].iEng;
            cout << "수학 : ";
            cin >> tStudentArr[iStudentCount].iMath;
  
  
            tStudentArr[iStudentCount].iTotal =
                tStudentArr[iStudentCount].iKor +
                tStudentArr[iStudentCount].iEng +
                tStudentArr[iStudentCount].iMath;
  
            tStudentArr[iStudentCount].fAvg =
                tStudentArr[iStudentCount].iTotal / 3.f;
  
  
            tStudentArr[iStudentCount].iNumber = iStdNumber;
  
            ++iStdNumber;
            ++iStudentCount;
  
            cout << "학생 추가 완료 " << endl;
  
  
  
            break;
        case MENU_DELETE:
  
  
            
            cout << "=======================삭제할 학생 ==================" << endl;
  
  
  
            cin.ignore(1024, '\n');
            cout << "삭제할 이름을 입력 : ";
            cin.getline(strName, NAME_SIZE);
  
            for (int i = 0; i < iStudentCount; ++i)
            {
                if (strcmp(tStudentArr[i].strName, strName) == 0)
                {
                    for (int j = i; j < iStudentCount - 1; ++j)
                    {
                        tStudentArr[i] = tStudentArr[i + 1];
                    }
                    --iStudentCount;
  
                    cout << "학생을 삭제하였습니다" << endl;
                    break;
                }
            }
  
  
            break;
        case MENU_SEARCH:
            
  
            cout << "=======================학생 탐색 ==================" << endl;
  
            
  
            cin.ignore(1024, '\n');
            cout << "탐색할 이름을 입력 : ";
            cin.getline(strName,NAME_SIZE);
  
            for (int i = 0; i < iStudentCount; ++i)
            {
                if (strcmp(tStudentArr[i].strName, strName) == 0)
                {
                    cout << "이름 : " << tStudentArr[i].strName << endl;
                    cout << "전화번호 : " << tStudentArr[i].strPhone << endl;
                    cout << "주소 : " << tStudentArr[i].strAddress << endl;
                    cout << "학번 : " << tStudentArr[i].iNumber << endl;
                    cout << "국어 : " << tStudentArr[i].iKor << endl;
                    cout << "영어 : " << tStudentArr[i].iEng << endl;
                    cout << "수학 : " << tStudentArr[i].iMath << endl;
                    cout << "총점 : " << tStudentArr[i].iTotal << endl;
                    cout << "평균 : " << tStudentArr[i].fAvg << endl << endl;
                    break;
                }
            }
  
  
  
  
  
            break;
        case MENU_OUTPUT:
  
            
  
            cout << "=============학생출력 ============" << endl;
  
            for (int i = 0; i < iStudentCount; ++i)
            {
                cout << "이름 : " << tStudentArr[i].strName << endl;
                cout << "전화번호 : " << tStudentArr[i].strPhone << endl;
                cout << "주소 : " << tStudentArr[i].strAddress << endl;
                cout << "학번 : " << tStudentArr[i].iNumber << endl;
                cout << "국어 : " << tStudentArr[i].iKor << endl;
                cout << "영어 : " << tStudentArr[i].iEng << endl;
                cout << "수학 : " << tStudentArr[i].iMath << endl;
                cout << "총점 : " << tStudentArr[i].iTotal << endl;
                cout << "평균 : " << tStudentArr[i].fAvg << endl << endl;
            }
  
  
  
            break;
        default:
            cout << "메뉴를 잘못 선택했습니다. " << endl;
            break;
        }
  
   
    }
}
 
// </iostream>
