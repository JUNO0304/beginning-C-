#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    int a, b;
    cout << "두 개의 정수를 입력하십시오: ";
    cin >> a >> b;
    cout << "둘 중에서 더 큰 정수는 ";
    int c = a > b ? a: b;
    cout << c << "입니다. \n";
    return 0;
}


/*
    ?: 연산자
    C++ 는 if else 구문 대신에 사용할 수 있는 연산자를 제공한다.?: 로 표기하는 이 연산자를 조건 연산자라고 부른다.
    조건 연산자는 C++ 에서 피연산자를 3개 사용하는 유일한 연산자이다. 
    expression1? expression2: expression3
    expression1 이 참이면 expression2 의 값이 전체 조건 표현신의 값이 된다. 그렇지 않으면 expression3 의 값이 전체 조건 표현식의 값이 된다.
    5 > 3? 10 : 12;     // 전체 조건 표현식의 값은 10 이다.
    3 == 9 ? 25 : 18;   // 전체 조건 표현식의 값은 18이다. 
    이는 if else 구문을 줄여서 쓸수있는 지름길 같은것이다.
    
    그러나 조건 연산자는 형식은 간결하지만 명확성이 떨어진다. 
    때때로 자신의 코드에 조건 연산자를 사용하여 남들이 코드를 해부하지 못하도록 하는 괘씸한 프로그래머들도 있다
    const char x[2][20] = {"Jason" , "at your service"\n};
    const char * y = "Quillstone";
    
    for (int i = 0; i < 3; i++)
        cout << ((i < 2) ? !i ? x[i] : y : x[1]);
    위 코드는 Jason Quillstone at your serivce 라는 문장을 출력한다. 

*/

/*
    OUTPUT
두 개의 정수를 입력하십시오: 25 
28
둘 중에서 더 큰 정수는 28입니다. 

*/
