#include <iostream>
#include <cstring>
using namespace std;


int main()
{  
    cout << "지금 사시는 아파트에 언제 입주하셨습니까? \n";
    int year;
    cin >> year;
    cout << "사시는 도시를 말씀해주시겠습니까 \n";
    char address[80];
    cin.getline(address, 80);
    cout << "아파트 입주 연도: " << year << endl;
    cout << "도시: " << address << endl;
    cout << "등록이 완료되었습니다! \n";

    return 0;
}

/*
    위 프로그램은 오류가 생긴다
    바로 도시를 입력할 기회조차 주지 않는다는것이다.
    왜 이런 오류가 생기냐면 우리가 연도를 입력할때 
    개행문자가 입력 큐에 남게되어 그다음 cin 을 호출할떄
    cin 이 그 개행문자를 행의 끝으로 판단하여 임의로 입력을 중단하는것이다
    이 문제를 해결하기 위해서는

    cin >> year;
    cin.get();

    또는
    (cin >> year).get() 

    를 사용하여 문제를 해결해줄수 있다.
*/

/*
    ** OUTPUT
지금 사시는 아파트에 언제 입주하셨습니까? 
1966
사시는 도시를 말씀해주시겠습니까 
아파트 입주 연도: 1966 
도시: 
등록이 완료되었습니다!

*/

