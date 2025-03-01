#include <iostream>
using namespace std;

/*
    세계 인구와 미국(또는 본인이 희망하는 국가)의 현재 인구수를 요구하는 프로그램을 작성하라. 작성한 정보를 long long 형 변수에 저장하라
    전세계 인수에서 미국 인구수가 차지하는 비중을 나타내 보아라. 
*/

int main()
{
    long long population, country;
    cout << "세계 인구수를 입력하시오: ";
    cin >> population; 
    cout << "희망하는 나라의 인구수를 입력하시오: ";
    cin >> country;

    long double percentage = double(country) / double (population) * 100;

    cout << "세계 인구수에서 미국이 차지하는 비중은 " << percentage << "%이다." << endl; 

    return 0;
}
