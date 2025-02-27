#include <iostream>
using namespace std;


/*실행 결과가 다음과 같은 프로그램을 작성하시오. 다만, main() 함수를 포함하여 세 개의 사용자 정의 함수를 사용해야 한다.

Three blind mice
Three blind mice
See how they run
See how they run

앞의 두 행은 함수 하나를 두번 호출하여 출력해야 한다. 나머지 두행도 다른 하나의 함수를 두번 호출하여 출력해야 한다.
*/

void mouse();
void run();

int main()
{
    mouse();
    mouse();
    run();
    run();

    return 0; 
}


void mouse()
{
    cout << "Three blind mice" << endl;
} 

void run()
{
    cout << "See how they run" << endl;
}
