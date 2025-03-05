#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
    double wages[3] = {10000.0, 20000.0, 30000.0};
    short stacks[3] ={3, 2, 1};

    double *pw = wages;
    short *ps =&stacks[0];

    cout << "pw = " << pw << ", *pw = " << *pw << endl;
    pw = pw + 1; 
    cout << "pw포인터에 1 을 더함: \n";
    cout << "pw = " << pw << ", *pw = " << *pw << "\n\n";

    cout << "ps = " << ps << ", *ps = " << *ps << endl;
    ps = ps + 1; 
    cout << "ps포인터에 1 을 더함: \n";
    cout << "ps = " << ps << ", *ps = " << *ps << "\n\n";

    cout << "배열 표기로 두 원소에 접근 \n";
    cout << "stacks[0] = " << stacks[0] << ", stacks[1]= " << stacks[1] << endl;
    cout << "포인터 표기로 두 원소에 접근 \n";
    cout << "*stacks = " << *stacks << ", *(stacks + 1) = " << *(stacks +1) << endl; 

    cout << sizeof(wages) << " = wages 배열의 크기 \n";
    cout << sizeof(pw) << " = pw 포인터의 크기 \n";

    return 0;
}


/*
    포인터, 배열, 포인터 연산
    정수형 변수에 1 을 더하면 값이 1만큼 증가한다
    포인터 변수에 1을 덯사면 값이 그 포인터가 지시하는 데이터형의 바이트 수만큼 증가한다
    EX) double  형이 8 바이트인 시스템에서, double 형을 지시하는 포인터에 1 을 더하는 것은 그 포인터의
    수치 값에서 8을 더하는 것과 같다. 

    대부분의 상황에서, C++ 는 배열이름을 그 배열의 첫번째 원소의 주소로 해석한다
    douible *pw = wages; 
    pw를 dobule 형을 지시하는 포인터로 선언하고, 그 배열의 첫번쨰 원소의 주소인 wages로 초기화한다. 
        
    프로그램은 stacks[1] 을 *(stacks +1) 과 완전히 동일하게 바라본다. 
*/

/*
    ** OUTPUT
nights의 값 = 1001: 메모리 위치 0x5ffe54
int형 값 = 1001: 메모리 위치 = 0x7d7b90
double 형 값 = 1e+07: 메모리 위치 = 0x7d80b0
포인터 pd의 메모리 위치: 0x5ffe48
pt의 크기 = 8: *pt 의 크기 = 4
pd의 크기 = 8: *pd의 크기 = 8
*/
