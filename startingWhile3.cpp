#include <iostream>
#include <string>
#include <ctime> 
using namespace std;
 
int main()
{
    int n; 

    cout << "1부터 10까지의 수 중에서 ";
    cout << "내가 좋아하는 수를 할번 맟추어 보십시오. \n";
    do
    {
        cin >> n; 
    } while (n != 7);
    cout << "맞았습니다. 내가 좋아하는 수는 럭키 세븐 7 입니다. \n";
    
    return 0; 
}

/*
    do while 루프
    탈출 조건 루프(exit-condition) 루프이다. 
    루프 몸체를 먼저 실행하고, 조건을 나중에 검사한다. 

    do
        body
    while(test-expression);
    사용자로부터 입력을 받아야 할때에는 조건을 검사하기 전에 우선 입력부터 받아야 하기 때문에 이러한 상황에서는 do while 루프가 두각을 드러낸다.
*/

/*
    OUTPUT
1부터 10까지의 수 중에서 내가 좋아하는 수를 할번 맟추어 보십시오. 
9
4
7
맞았습니다. 내가 좋아하는 수는 럭키 세븐 7 입니다. 

*/
