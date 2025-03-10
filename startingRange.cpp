#include <iostream>
#include <string>
#include <ctime> 
using namespace std;
 
int main()
{

    return 0; 
}

/*
    range 기반의 for 루프 
    double prices[5] = {4.99, 10.99, 6.87, 7.99, 8.49};
    for (double x : prices)
        cout << x << endl;
    위 코드에서 x는 prices 의 첫번째 요소로 초기화된다. 
    간단히 말해서 배열의 range 안에 포함되는 모든 값들이 출력된다
    여기서 배열의 값을 변경할때는 다른 구문이 필요하다.
    for (double &x : prices )
        x = x * 0.80;       //가격의 20% 세일
    range 기반 for 루프는 초기화 리스트에도 사용될수 있다
    for(int x :{3, 4, 2, 8, 6})
        cout << x << " ";
    cout << endl; 
*/

/*
    OUTPUT

*/
