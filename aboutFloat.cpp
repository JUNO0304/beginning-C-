#include <iostream>
#define ZERO 0
#include <climits>
using namespace std;

int main()
{
    cout.setf(ios_base::fixed, ios_base::floatfield);

    float tub = 10.0 / 3.0;
    double mint = 10.0 / 3.0;
    const float million = 1.0e6;

    cout << "tub = " << tub;
    cout << ", a million tubs = " << million * tub;
    cout << ", \nten million tubs = ";
    cout << 10 * million * tub << endl; 

    cout << "mint = " << mint << "and a million mints = ";
    cout << million * mint << endl; 
    return 0; 
}

/*
    부동 소수점수
    표기하는법
    12.34
    939001.32
    0.00023
    8.0

    3.45E6 --> 3.45 에 1,000,000 을 곱하라는 뜻이다.  
    2.52e+8 //E 또는 e 를 사용할수 있으며 + 는 생략이 가능하다
    8.33E-4 // 지수는 음수일 수도 있다
    7E5 // 7.0E+05 와 같다
    -18.32e13 // 앞에 + 나 - 부호를 넣을 수 있다
    1.69e12 //

    부동 소수점형
    float, double, long double

    1.234f // float 형 상수
    2.45E20F //float 형 상수
    2.3453234E28    //double 형 상수
    2.2L    // long double 형 상수

    
*/
