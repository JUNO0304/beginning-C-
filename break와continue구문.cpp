#include <iostream>
using namespace std;
const int ArSize = 80; 
int main()
{
    char line[ArSize];
    int spaces = 0;
    cout << "한 행의 텍스트를 입력하십시오: \n";
    cin.get(line, ArSize);
    cout << "전체 텍스트: \n" << line << endl; 
    cout << "첫 마침표까지의 텍스트: \n";

    for (int i = 0; line[i] != '\0'; i++)
    {
        cout << line[i];
        if (line[i] == '.')
            break;
        if(line[i] != ' ')
            continue;
        spaces++;
    }
    cout << "\n빈칸 문자는 " << spaces << "개입니다.\n";
    cout << "종료.\n";

    return 0; 
}


/*
    break 와 continue 구문
    break 와 continue 구문은 프로그램이 코드의 일부를 무시하고 건너뛰게 만든다.
    break 구문은 switch 구문과, 모든 종류의 루프에 사용할수 있다.
    break 는 switch나 루프의 바로 뒤에 오는 구문을 실행하게 만든다.
    continue 구문은 루프에만 사용할 수 있다. 
    continue 는 루프 몸체의 나머지를 무시하고, 새로운 루프 주기를 시작하게 만든다.

    continue 구문은 루프 몸체의 나머지 부분을 건너뛰지만 갱신 부분은 무시하지 않는다.
    for 루프에서 continue 구문은 갱신부분으로 점프하고 다시 조건 검사 표현식으로 이동한다
    그러나 while 루프에서 continue 구문은 프로그램의 흐름을 조건 검사 표현식으로 곧장 가게 만든다.
    따라서 continue 구문 다음에 있는 while 루프의 갱신 표현식은 무시된다.
    이것은 에러를 일으킬수 있다. 

    C++ 에서는 goto 라는 구문이 있다.
    goto paris;
    paris: 라는 레이블이 붙어 있는 위치로 점프하라는 것을 의미한다. 
    예를 들면

    char ch;
    cin >> ch;
    if(ch =='P')
        goto paris;
    cout << ...
    ...
    paris : cout << "여러분, 파리에 도착했습니다. \n";

*/

/*
    OUTPUT
한 행의 텍스트를 입력하십시오: 
Let's dso lunch today. you can pay! 
전체 텍스트: 
Let's dso lunch today. you can pay!
첫 마침표까지의 텍스트:
Let's dso lunch today.
빈칸 문자는 3개입니다.
종료.

*/
