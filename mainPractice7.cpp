#include <iostream>
using namespace std;
/*
시간 값과 분 값의 입력을 사용자에게 요청하는 프로그램을 작성하라.
main() 함수는 이 두값을 void형 함수에 전달한다. 그 void형 함수는 다음과 같은 실행 예가 보여주는 형식으로 두 값을 표시한다.

    시간 값을 입력하시오: 9
    분값을 입력하시오: 28
    시각: 9:28
*/

void clock(int, int);

int main()
{
    int hour, min;
    cout << "시간 값을 입력하시오: ";
    cin >> hour;
    cout << "분값을 입력하시오: ";
    cin >> min;
    
    clock(hour, min);

    return 0;
}

void clock(int hour,int min)
{
    cout << "시각: " << hour << ":" << min << endl;
}

