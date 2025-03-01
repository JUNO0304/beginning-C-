#include <iostream>
using namespace std;

/*
   주행한 거리를 마일 단위로, 소비한 휘발유의 양을 갤런 단위로 묻고, 갤런당 마일 수를 보고하는 프로그램을 작성하라.
   또는 주행한 거리를 킬로미터 단위로, 소비한 휘발유의 양을 리터 단위로 묻고, 유럽 스타일로 100 킬로미터당 리터 수를 보고하는 프로그램을 작성하라.
*/

int main()
{
    double mile, gallon;
    cout << "주행한 거리를 마일 단위로 작성하시오: ";
    cin >> mile; 
    cout << "소비한 휘발유를 갤런 단위로 작성하시오: ";
    cin >> gallon;
    
    cout << "당신의 mpg 는: " << mile/gallon << "mpg 입니다. " << endl; 
    

    cout << endl << endl;

    double killo, litter; 
    cout << "주행한 거리를 킬로미터 단위로 작성하시오: ";
    cin >> killo;
    cout << "소비한 휘발유의 양을 리터 단위로 작성하시오: ";
    cin >> litter;

    cout << "당신의 L/100km 는: " << (litter/killo) * 100 <<"L/100km 입니다.";

    return 0;
}
