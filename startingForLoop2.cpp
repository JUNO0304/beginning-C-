#include <iostream>
using namespace std;

int main()
{
    int x;

    cout << "대입 표현식 x = 100 의 값은 ";
    cout << (x = 100) << endl;
    cout << "현재 x 의 값은 " << x << endl;
    cout << "관계 표현식 x < 3 의 정수값은 ";
    cout << (x < 3) << endl;
    cout << "관계 표현식 x > 3 의 정수값은 ";
    cout << (x > 3) << endl;
    cout.setf(ios_base::boolalpha);     // 최신 C++ 기능
    cout << "관계 표현식 x < 3 의 bool 값은 ";
    cout << (x < 3) << endl;
    cout << "관계 표현식 x > 3 의 bool 값은 ";
    cout << (x > 3) << endl; 
    return 0; 
}

/*
    표현식과 구문식
    10 은 값이 10 인 표현식이고
    28 * 20 은 값이 560 인 표현식이다
    22 + 27 은 두 개의 값과 하나의 연산자로 이루어지며 49라는 명백한 값을 가진다
    x = 20; 는 두개의 값과 하나의 연산자로 이루어진다. 이것또한 표현식이다

    c++에서는 다음과 같은 구문들도 허락된다
    maids = (cooks = 4) + 3; 
    cooks 에 4 라는 값이 대입되고 거기에 3이 더해져서 maids 는 7이라는 값을 가진다

    x = y = z = 0;
    이라는 구문도 가능한데, C++의 연산자 우선순위 에 따라서 z 에 0이 대입되고 z의 0이 y로 대입되고 y의 0이 x로 대입된다.

    일반적으로 cout은 bool값을 출력하기전에 정수로 변환한다. 
    그러나
    cout.setf(ios_base::boolalpha); 
    라는 함수 호출이 있으면 cout  이 1 이나 0 대신 true 나 false 를 출력하도록 한다. 
*/

/*
    OUTPUT
대입 표현식 x = 100 의 값은 100
현재 x 의 값은 100
관계 표현식 x < 3 의 정수값은 0
관계 표현식 x > 3 의 정수값은 1
관계 표현식 x < 3 의 bool 값은 false
관계 표현식 x > 3 의 bool 값은 true


*/
