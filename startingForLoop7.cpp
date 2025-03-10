#include <iostream>
#include <string>
using namespace std;
const int Cities = 5;
const int Years = 4;

int main()
{
    const char * cities[Cities] =
    {
        "Seoul",
        "Jeju",
        "Busan",
        "Gangneung",
        "Daegu"
    };

    int maxtemps[Years][Cities] = 
    {
        {35, 32, 33, 36, 35},
        {33, 32, 34, 35, 31},
        {33, 34, 32, 35, 34},
        {36, 35, 34, 37, 35}
    };
    cout << "2009 년 부터 2012년까지의 연중 최고 온도 \n\n";
    for (int city = 0; city <Cities; ++city)
    {
        cout << cities[city] << ":\t";
        for(int year = 0; year < Years; ++year)
            cout << maxtemps[year][city] << "\t";
        cout << endl;
    }
    return 0; 
}

/*
    중첩 루프와 2 차원 배열
    2차원 배열은 행 과 열 을 모두 가지고 있는 표를 연상하면 된다.
    예를 들어 여섯개의 지역 대리점의 분기별 판매량을 2 차원 배열로 나타낼 수있다. 
    int maxtemps [4][5];
    이 선언 구문은 maxtemps 가 4 개의 원소를 갖는 배열이고, 그 배열의 각 원소는 5 개의 정수를 저장할수 있는 또다른 배열이라는 뜻이다. 

    maxtemps 에 있는 모든 원소를 출력 하고 싶으면
    for(int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 5; ++col)
            cout << maxtemps[row][col] << "\t";
        cout << endl;
    }
    
    1 차원 배열의 초기화
    int btus[5] = {23, 26, 24, 31, 28};
    2 차원 배열의 초기화
    int maxtemps[4][5] = 
    {
        {94, 98, 87, 103, 101},     // MAXTEMPS[0] 의 값들
        {94, 98, 87, 103, 101},     // maxtemps[1] 의 값들
        {94, 98, 87, 103, 101},     // maxtemps[2] 의 값들
        {94, 98, 87, 103, 101}      // maxtemps[3] 의 값들
    }
*/

/*
    OUTPUT
Seoul:  35      33      33      36
Jeju:   32      32      34      35
Busan:  33      34      32      34
Gangneung:      36      35      35      37
Daegu:  35      31      34      35
*/
