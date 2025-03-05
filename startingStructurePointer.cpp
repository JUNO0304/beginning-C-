#include <iostream>
#include <cstring>
#include <string>
using namespace std;

struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    inflatable *ps = new inflatable;
    cout <<"모형풍선의 이름을 입력하십시오: ";
    cin.get(ps-> name, 20);
    cout << "부피를 세제곱 피트 단위로 입력하십시오: ";
    cin >> (*ps).volume;
    cout << "가격을 달러 단위로 입력하십시오: $";
    cin >> ps->price; 
    cout <<"이름: " << (*ps).name << endl;
    cout << "부피: " << ps->volume << " cubic feet \n";
    cout << "가격: $" << ps->price << endl; 
    delete ps; 

    return 0;
}


/*
    new를 사용한 동적 구조체의 생성
    우리는 컴파일 시간보다 실행 시간에 배열을 생성하는것이 메모리 방면에서 더욱 더 유리하다는것을 배웠다
    이를 응용해서 우리는 동적 구조체를 만들수 있다. 
    구조체를 생성하려면 구조체형 앞에다 new를 붙인다.
    EX) 예를 들어, inflatable 형의 이름 없는 구조체를 생성하고, 그것의 주소를 적당한 포인터에 대입하려면 다음과 같은 코드를 쓸수있다
    inflatable * ps = new inflatable; 
    위 코드는 inflatable 형의 구조체를 저장할수 있는 크기의 새로운 메모리 블록을 확보하고, 그것의 주소를 포인터 ps 에 대입한다
    동적 구조체에서는 (.)연산자를 사용하여 멤버에 접근할수없다. 
    우리는 이 문제를 해결하기 위해 화살표 (->) 연산자를 사용한다. 

*/

/*
    ** OUTPUT
모형풍선의 이름을 입력하십시오: Fabulous Frodo  
부피를 세제곱 피트 단위로 입력하십시오: 1.4
가격을 달러 단위로 입력하십시오: $27.99
이름: Fabulous Frodo
부피: 1.4 cubic feet
가격: $27.99
*/

