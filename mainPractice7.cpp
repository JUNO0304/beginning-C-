#include <iostream>
using namespace std;

/*
    휘발유 소비량을 유럷 스타일 (100 킬로미터당 리터 수) 로 묻고, 미국 스타일 (갤런당 마일 수)로 변환하는 프로그램을 작성하라
    두 스타일은 측정 단위가 서로 다를 뿐만 아니라. 
    미국스타일은 유럽 스타일의 역수이다.
    여기서 100 킬로미터는 62.14 마일이고, 1 갤런은 3.875 리터이다. 
    그러므로 19mpg 는 약 12.4 liters/100km 이고 27mpg 는 약 8.7 liters/100km 이다. 
*/

int main()
{

    const double MILE = 62.14;
    const double GALLON = 3.875;
    double liter;
    cout << "휘발유 소비량을 유럽 스타일로 작성해주세요 (100킬로미터당 리터수만 작성해주세요):  L \b\b\b\b";
    cin >> liter; 


    cout << "100킬로미터당 " << liter << "는 " << MILE / (liter/GALLON) << "mpg 이다.";

    return 0;
}
