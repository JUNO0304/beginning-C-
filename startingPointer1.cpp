#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
    int donuts = 6;
    double cups =4.5;

    cout << "donuts 의 값 = " << donuts;
    cout << ", donuts 의 주소 = " << &donuts << endl;
    
    cout << "cups 의 값 = " << cups;
    cout << ", cups 의 주소 = " << &cups << endl;


    return 0;
}


/*
    포인터와 메모리 해제

    컴퓨터 프로그램이 데이터를 저장할때 알아야할 세가지
    * 어디에 저장하는가
    * 어떤 값이 저장되는가
    * 어떤 종류의 정보인가
    지금 까지는 간단한 변수를 사용하요 이러한 목적을 성취하였다
    이제는 포인터 라는 개념으로 컴퓨터 데이터를 조작해보자. 
    포인터는 값 자체가 아니라 값의 주소를 저장하는 변수이다.

    포인터에 대해 깊이 알아가기 전, 변수에 주소를 알아내는 법을 알아보자
    주소 연산자(&) 를 앞에 붙이면 특정 변수의 주소를 알아낼수 있다.
    
    16진수 표기가 가장 일반적인 데이터의 주소를 나타내는 방법이기에 
    통상 주소값을 출력할때는 16진수 표기를 사용한다.
    
        
*/

/*
    ** OUTPUT
donuts 의 값 = 6, donuts 의 주소 = 0x5ffe5c
cups 의 값 = 4.5, cups 의 주소 = 0x5ffe50
*/

