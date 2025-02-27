#include <iostream>
using namespace std;
int stonetolb(int); // 함수 원형


int main()
{
    int stone; 
    cout << "체중을 스톤 단위로 입력하십시오: ";
    cin >> stone;
    //int pounds = stonetolb(stone);
    cout << stone << "스톤은 ";
    cout << stonetolb(stone) << " 파운드입니다." << endl;
    return 0; 
}

int stonetolb (int sts)
{
    return 14 * sts; 
}



/*



*/
