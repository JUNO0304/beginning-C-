#include <iostream>
using namespace std;
enum {red, orange, yellow, green, blue, violet, indigo};
int main()
{
    cout << "컬러 코드 (0,1,2,3,4,5,6) 를 입력하십시오: ";
    int code;
    cin >> code;
    while(code >= red && code <= indigo)
    {
        switch (code)
        {
            case red : cout << "입술은 붉었습니다. \n"; break;
            case orange : cout << "머리카락은 귤색이었습니다. \n"; break;
            case yellow : cout << "신발은 노랑색이었습니다. \n"; break;
            case green : cout << "손톱은 초록색이었습니다. \n"; break;
            case blue : cout << "스웨터는 파랑색이었습니다.\n"; break;
            case violet : cout << "눈은 보라색이었습니다. \n"; break;
            case indigo : cout << "분위기는 쪽빛이었습니다. \n"; break;
        }
        cout << "컬러 코드(0,1,2,3,4,5,6) 를 입력하십시오: ";
        cin >> code;
    }
    cout << "프로그램을 종료합니다. \n";
    return 0; 
}


/*
    레이블로 열거자 사용하기
    switch 구문에서 열거자 사용하기
    일반적으로 cin은 열거자를 인식하지 않는다.
    그러므로 프로그램은 사용자가 선택사항을 입력하면 그것을 int값으로 읽어들인다.
    그 int 값을 switch 구문이 열거자 중의 하나에 대응하는 case 레이블과 비교할 때, 열거자가 int 형으로 승급된다.
    또한 열거자들은 while 루프 조건 검사에서도 int 형으로 승급된다.

    switch 와 if else
    if else 구문은 값의 범위를 다룰 수 있다. 몇세 부터 몇세까지 추가로 몇세부터 몇세까지 와 같은...
    그러나 switch 구문은 값의 범위를 다루는게 불가는ㅇ하다. 
    switch 의 각 레이블들은 단일한 값이어야 한다. 또 한 그 값이 정수형이어야 한다. 
    그러나 모든 선택 사항들이 정수형 상수로 인식되는게 가능하다면 switch 구문이 더욱 효과적이다

*/

/*
    OUTPUT
컬러 코드 (0,1,2,3,4,5,6) 를 입력하십시오: 3
손톱은 초록색이었습니다. 
컬러 코드(0,1,2,3,4,5,6) 를 입력하십시오: 5
눈은 보라색이었습니다. 
컬러 코드(0,1,2,3,4,5,6) 를 입력하십시오: 2
신발은 노랑색이었습니다. 
컬러 코드(0,1,2,3,4,5,6) 를 입력하십시오: 6
분위기는 쪽빛이었습니다. 
컬러 코드(0,1,2,3,4,5,6) 를 입력하십시오: 8
프로그램을 종료합니다. 

*/
