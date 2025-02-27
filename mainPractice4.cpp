#include <iostream>
using namespace std;


/*
사용자에게 본인의 이름을 입력하도록 요구하는 프로그램을 작성하시오. 또한 그 프로그램은 화면에 사용자의 나이를 월수로 나타내도록 합니다.
*/

int main()
{
    int age, month;
    cout << "Enter your age: "; 
    cin >> age;
    month = age * 12; 
    cout << endl << "이때 당신의 나이를 월수로 나타낼 경우 " << month << "입니다" << endl;
    return 0;
}
