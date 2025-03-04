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
    inflatable guests[2] =
    {
        {"Bambi", 0.5, 21.99},
        {"Godzilla", 2000, 565.99}
    };

    cout << guests[0].name << "와 " << guests[1].name << "의 부피를 합하면 \n"
    << guests[0].volume + guests[1].volume << " 세제곱피트입니다. \n";


    return 0;
}


/*
    구조체

    원소가 구조체인 배열을 생성할수 있다.
    inflatable g ifts[100];     // inflatable 형 구조체 100개의 배열
    cin >> gifts[0].volume;     // 첫번쨰 구조체의 volume 멤버에 입력
    cout << gifts[99].price << endl;    //마지막 구조체의 price 값을 출력
    
    gifts 자체는 구조체가 아니라 배열이므로 gifts.price 같은 표현은 아무런 의미가 없다. 

    구조체의 배열을 초기화하는 방법은 다음과 같다.
    inflatable guests[2] =
    {
    {"Bambi", 0.5, 21.99},
    {"Godzilla", 2000, 565.99}
    }
*/

/*
    ** OUTPUT
Bambi와 Godzilla의 부피를 합하면 
2000.5 세제곱피트입니다.
*/

