#include <iostream>
using namespace std;

int main()
{
    char ch;
    int spaces = 0;
    int total = 0;
    cin.get(ch);
    while( ch != '.')
    {
        if (ch ==' ')
            ++spaces;
        ++total;
        cin.get(ch);
    }
    cout << "이 문장의 총 문자 수는 " << total << " 이고, ";
    cout << " 그중에서 빈칸은 " << spaces << "개입니다. \n";
    return 0; 
}

/*
    if 구문
    if 구문은 조건을 평가한 결과가 참이면 그 다음에 오는 하나의 구문 또는 구문 블록을 수행하고, 결과가 거짓이면
    그것들을 무시하고 건너띈다.
    if 구문은 이런 방식으로 진행된다.
    if (test-condition)
        statement
    여기서 test-condition 이 참이될 경우에 statement 를 수행한다. 

    위 코드는 입력된 총 문자 수와 입력에 들어 있는 총 빈칸 수를 카운트 하는 프로그램이다. 
*/

/*
    OUTPUT
The ballonnist was an airhead 
with lofty goals. 
이 문장의 총 문자 수는 46 이고,  그중에서 빈칸은 6개입니다. 

*/
