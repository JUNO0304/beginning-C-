#include <iostream>
#include <string>
using namespace std;
const int ArSize = 20; 
int main()
{
    char name[ArSize];

    cout << "영문 이름을 입력하십시오: ";
    cin >> name;
    cout << "귀하의 영문 이름을 한줄에 한 자씩 \n";
    cout << "ASCII 코드와 함께 표시하면 이렇습니다. \n";
    int i = 0;
    while (name[i] != '\0')
    {
        cout << name[i] << ": " << int(name[i]) << endl;
        i++;
    }
    return 0; 
}

/*
    while 루프

    while 루프는 for 루프에서 초기화 부분과 갱신 부분을 없애고, 루프 몸체와 조건 검사 부분만 남겨 놓은 것이다.
    while(test-expression)
        body
    프로그램은 먼저 괄호 안에 조건문구를 검사하고 true 로 평가될시 몸체에 있는 구문들을 실시한다. 
*/

/*
    OUTPUT
영문 이름을 입력하십시오: Muffy 
귀하의 영문 이름을 한줄에 한 자씩 
ASCII 코드와 함께 표시하면 이렇습니다.
M: 77
u: 117
f: 102
f: 102
y: 121

*/
