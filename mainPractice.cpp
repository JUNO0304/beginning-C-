#include <iostream>
using namespace std;

/*
    키를 정수형 센티미터 단위로 묻고 그 값을 미터와 센티미터 단위로 변환하는 간단한 프로그램을 작성하라. 입력해야 할 곳을 사용자에게 지시하기 위해
    밑줄 문자를 사용하고 환산 인수로 const 기호 상수를 사용하라.
*/

int main()
{
    int height;
    const int CONVERTER = 100; 
    cout << "What is your height in cm: ___cm \b\b\b\b\b\b";
    cin >> height;

    int meter = height / CONVERTER;
    int centimeter = height % CONVERTER; 
    
    cout << "your height is " << meter << "m " << centimeter << "cm." << endl; 



    return 0;
}
