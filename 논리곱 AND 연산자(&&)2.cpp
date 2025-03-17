#include <iostream>
using namespace std;
const char * qualify[4] =
{
    "만미터 달리기",
    "모래사장 씨름",
    "비치 발리",
    "부메랑 던지기",
};

int main()
{
    int age;
    cout << "나이를 입력하십시오: ";
    cin >> age; 
    int index;

    if (age> 17 && age < 35)    //18세 부터 34 세 까지
        index = 0; 
    else if(age >= 35 && age < 50)  // 35세부터 49살까지
        index = 1;
    else if (age >= 50 && age < 65) //50살부터 64 살까지
        index = 2;
    else    //65살부터 그 위로
        index = 3;
    
    cout << "당신은 " << qualify[index] << " 에 참가할 수 있습니다. \n";
    return 0; 
}

/*
    &&를 이용한 범위 설정
    값이 속하는 범위에 따라 서로 다른선택을 할수 있도록, && 연산자를 사용하여 if else if else 구문을 길게 연결할 수 있다.



*/

/*
    OUTPUT
나이를 입력하십시오: 87
당신은 부메랑 던지기 에 참가할 수 있습니다. 

*/
