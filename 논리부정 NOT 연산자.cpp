#include <iostream>
#include <climits>
using namespace std;
bool is_int(double);

int main()
{
    double num;

    cout << "정수 값을 하나 입력하십시오: ";
    cin >> num;
    while(!is_int(num))
    {
        cout << "int 형에 대입할 수 없는 값입니다. 다시 입력하십시오: ";
        cin >> num;
    }
    int val = int (num);
    cout << "당신이 입력한 정수는 " << val << "입니다. \n";
    return 0; 
}
bool is_int(double x)
{
    if (x <= INT_MAX && x >= INT_MIN)
        return true;
    else
        return false;
}

/*
    논리부정 NOT 연산자(!)
    ! 연산자는 뒤따르는 표현식의 값을 반대로 만든다. 
    ! 연산자를 사용하지 않고도 훨씬 더 명확하게 관계를 표현할 수 있다.
    if (!(x > 5))       // (x <= 5) 가 더 명확하다
    !연산자는 참과 거짓을 리턴하는 함수와 함께 사용하면 매우 유용하다. 
    예를 들어 strcmp(s1, s2) 는 서로 값이 다르면 참을 값이 같으면 거짓을 리턴한다.
    여기에 !연산자를 사용할시 값이 같을때 참을 리턴할수 있게 만들수 있다.

    위 프로그램에서는 bool 값을 리턴하는 is_int 함수에서 매개변수가 int형 범위에 속하는지 판별하기위해 climits 헤더파일 에 정의되어 있는 INT_MAX 와 INT_MIN 이라는 두 기호상수를 사용한다.

    논리 연산자의 고려사항
    C++에서는 논리곱 연산자와 논리합 연산자가 관계 연산자보다 우선순위가 낮다.
    x > 5 && x < 10 같은경우에는
    (x > 5) && (x < 10) 으로 처리된다는 뜻이다.
    
    그러나 논리부정 연산자는 어떠한 관계 연산자나 산술 연산자보다 우선순위가 높다. 



*/

/*
    OUTPUT
정수 값을 하나 입력하십시오: 6234128679
int 형에 대입할 수 없는 값입니다. 다시 입력하십시오: -8000222333
int 형에 대입할 수 없는 값입니다. 다시 입력하십시오: 99999
당신이 입력한 정수는 99999입니다. 

*/
