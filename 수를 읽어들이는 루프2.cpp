#include <iostream>
using namespace std;
const int Max = 5; 
int main()
{
    int golf[Max];
    cout << "골프 점수를 입력하십시오. \n";
    cout << "총 " << Max << " 라운드 점수를 입력해야 합니다.\n";
    int i;
    for(i = 0; i < Max; i++)
    {
        cout << "round #" << i + 1 << ": ";
        while(!(cin >> golf[i])){
            cin.clear();
            while(cin.get() != '\n')
                continue;
            cout << "골프 점수를 입력하십시오: ";
        }
    }
    double total = 0.0;
    for(i = 0; i < Max; i++)
        total += golf[i];
    
    cout << "총 " << Max << "라운드의 평균 점수 = "
        << total / Max << endl;

    return 0; 
}


/*
    앞의 예제는 수가 아닌 것이 입력된 후에는 어떠한 입력도 받아들이지 않는다.
    그러나 다시 입력을 받아야하는경우를 생각해보자. 
    그러면 프로그램은 다음과 같은 세 단게를 취할 필요가 있다.
    1. 새로운 입력을 받아들일 수 있도록 cin 을 초기화 한다.
    2. 입력 큐에 남아있는 불량 입력을 제거한다.
    3. 사용자에게 다시 입력할 것을 요구한다. 

    

*/

/*
    OUTPUT
골프 점수를 입력하십시오. 
총 5 라운드 점수를 입력해야 합니다.
round #1: 88
round #2: 87
round #3: must i?
골프 점수를 입력하십시오: 103
round #4: 94
round #5: 86
총 5라운드의 평균 점수 = 91.6
*/
