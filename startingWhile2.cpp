#include <iostream>
#include <string>
#include <ctime> 
using namespace std;
 
int main()
{
    cout << "지연 시간을 초 단위로 입력하십시오: ";
    float secs;
    cin >> secs;
    clock_t delay = secs * CLOCKS_PER_SEC;

    cout << "카운터를 시작합니다. \a\n";
    clock_t start = clock();
    while (clock() - start < delay)
        ;
        cout << "종료 \a\n";
    return 0; 
}

/*
    잠시만--시간 지연 루프
    시간을 지연시키는 동작을 프로그램 안에 넣어야할때가 있다.
    메시지를 출력한 뒤에 사용자가 그 메시지를 읽기도 전에 다른 동작으로 전화하는 프로그램 같은 경우
    while 루프는 이러한 일을 수행할수있다. 
    long wait = 0;
    while(wait < 10000)
        wait++;
    위 코드는 문제가 있는데 각기 다른 컴퓨터에 다르게 작동한다는것이다.
    ctime 헤더파일
    이 헤더 파일은 초당 시스템 시간 단위 수를 알려 주는 CLOCKS_PER_SEC 라는 기호 상수를 정의한다. 
    clock() 함수가 리턴하는 시스템 시간을 이 상수로 나누면 초 단위의 시간을 얻을 수 있다.
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
