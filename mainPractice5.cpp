#include <iostream>
using namespace std;


/*
섭씨 온도를 매개변수로 전달받아 화씨 온도로 환산하여 리턴하는 사용자 정의 함수를 main() 함수가 호출하는 프로그램을 작성하시오.
프로그램은 섭씨 온도로 입력할것을 요구해야 하고, 다음과 같은 실행 결과를 출력해야 한다.
섭씨 온도를 입력하고 Enter 키를 누르십시오: 20 
섭씨 20도는 화씨로 68도입니다.

참고로, 섭씨 온도를 화씨 온도로 변환하는 공식은 다음과 같다.
    화씨 온도 = 1.8 x 섭씨 온도 +32.0
*/

double converter(double);

int main()
{
    double temp;
    double temp2;
    cout << "섭씨 온도를 입력하고 Enter 키를 누르십시오: ";
    cin >> temp;
    temp2 = converter(temp);
    cout << "섭씨 " << temp << "도는 화씨로 " << temp2 << "도입니다" << endl; 

    return 0;
}


double converter(double temp)
{
    return temp * 1.8 + 32.0;
}
