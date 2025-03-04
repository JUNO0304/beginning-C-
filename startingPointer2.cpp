#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
    int updates = 6;
    int *p_updates;

    p_updates = &updates;

    cout << "값: updates = " << updates;
    cout << ", *p_updates = " << *p_updates << endl; 

    cout << "주소: &updates = " << &updates;
    cout << ", p_updates = " << p_updates << endl;

    *p_updates = *p_updates + 1;
    cout << "변경된 updates = " << updates << endl;


    return 0;
}


/*
    컴파일 시간과 실행 시간.
    실행 시간 --> 프로그램이 실제로 실행되는 동안을 의미
    EX) 휴가동안 그날의 날씨와 기분에 따라 여행지를 임의로 바꾸는것
    컴파일 시간 --> 컴파일러가 소스코드를 실행 코드로 변환하는 시간
    EX) 이미 예정된 스케줄에 따라 여행을 강행하는 것과 같다. 

    포인터

    포인터라는 특별한 데이터형의 변수에 어떤 값의 주소를 저장한다
    즉 포인터는 주소를 나타낸다. 
    간접값 (indirect value) 연산자 또는 간접 참조 (dereferencing) 연산자라고 부르는 * 를 포인터 이름앞에 붙이면 그 주소에 저장되어 있는 값이 된다.
    예를 들어 manly 가 포인터라고 가정했을때
    manly 는 주소를 나타내고
    *manly 는 manly라는 주소에 저장되어 있는 값을 나타낸다.

    포인터 선언과 초기화
    데이터 형이 다른 값의 주소들은 서로 다르기 때문에 포인터를 선언할때는 그 포인터가 지시하는 데이터형이 뭔지 알려줘야 한다
    int* ptr || int *ptr 둘다 상관 없지만
    int* p1, p2;  같은 경우는 p1을 포인터 변수로 p2를 보통의 int 형 변수로 생성한다. 

    다른 데이터형을 지시하는 포인터들도 같은 형식으로 선언할수 있다
    double *tax_ptr;
    char *str; 
    이 포인터들은 크기가 제각각인 데이터형들을 지시하지만, 포인터 변수 자체의 크기는 같다. 

    선언 구문을 사용하여 포인터를 초기화 할수있다. 
    int higgens = 5;
    int *pt = &higgens; //*pt 가 초기화되는것이 아니라 포인터인 pt가 &higgens 값으로 초기화된다

    포인터의 위험
    C++ 에서 포인터를 생성하면 컴퓨터는 주소를 저장하기 위한 메모리를 대입한다. 
    long *fellow;       //long 형을 지시하는 포인터 생성
    *fellow = 223323;   // 그러나 알수없는 위치에 값을 저장해버림
    여기서 우리는 fellow 라는 포인터에 주소를 대입하는 단계를 빠트렸다. 
    현재 fellow(주소) 에는 랜덤한 주소가 있읅것이며 그 주소에 원래 있던 값이 뭐가 되었든간에 223323 으로 바꿔버릴것이다
    이러한 코드는 오류를 낳기 쉽다. 

    포인터와 수
    포인터에는 정수를 직접 대입할수 없다. 
    포인터는 정수형이 아니기 때문이다
    int *pt;
    pt = 0xB80000; //데이터형 불일치

    위 방식을 작동하게 하려면 이런식으로 코드를 짜야한다 (새로 만들어진 C++에서는 더이상 작동하지 않는 방식이다)
    int *pt;
    pt = (int *) 0xB80000;
    포인터가 int 형값을 가지고 있다고 해서 pt를 int 형이라고 착각하면 안된다. 
        
*/

/*
    ** OUTPUT
값: updates = 6, *p_updates = 6
주소: &updates = 0x5ffe54, p_updates = 0x5ffe54
변경된 updates = 7
*/
