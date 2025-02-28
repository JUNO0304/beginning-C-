#include <iostream>
using namespace std;

/*
    키를 피트와 인치 단위로 묻고, 체중을 파운드 단위로 묻는 간단한 프로그램을 작성하라. (정보를 세 개의 변수를 사용하여 지정하라.)
    프로그램은 BMI (비만 지수; BODY MASS INDEX) 를 보고해야 한다. 
    BMI 를 계산하려면 먼저 피트와 인치 단위로 주어진 키를 인치 단위의 키로 변환한다. (1 피트는 12 인치이다.)
    그러고 나서 인치 단위의 키에 0.0254 를 곱하여 미터 단위의 키로 변환한다.
    그리고 파운드 단위의 체중에 2.2를 나누어 킬로그램 단위의 질량으로 변환한다.
    마지막으로 킬로그램 단위의 질량을 미터 단위의 키의 제곱으로 나누어 BMI 를 계산한다.
    여러 가지 환산 인수를 나타 내기 위해 기호 상수를 사용하라.
*/

int main()
{
    
    double feet;
    double inch;
    double weight;
    cout << "type in your ft: ___ft \b\b\b\b\b\b";
    cin >> feet;
    
    cout << "type in your inch in: ___in \b\b\b\b\b\b";
    cin >> inch; 
    
    cout << "What is your weight in lbs: ___lbs \b\b\b\b\b\b";
    cin >> weight;

    inch = (inch + feet * 12) * 0.0254; 
    weight = weight / 2.2; 
    cout << "Here is your BMI: " << weight/inch << endl; 

    return 0;
}
