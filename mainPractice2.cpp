#include <iostream>
using namespace std;


//거리에 대한 마일 단위로 입력을 요구하고, 그것을 킬로미터 단위로 환산하는 프로그램을 작성하시오


int main()
{
    double mile;
    double km; 
    cout << "Enter Mile: " << endl;
    cin >> mile;

    km = mile * 1.60934;
    cout << "When it's converted into kilometers its: " << km << "km" << endl; 
    return 0; 
}
