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
    inflatable guest =
    {
        "glorious Gloria",  // name value
        1.88,               // volume value
        29.99               // price value
    };

    inflatable pal =
    {
        "Audacious Arthur",
        3.12,
        32.99
    };

    cout << "지금 판매하고 있는 모형풍선은 \n" << guest.name;
    cout << "와 " << pal.name << "입니다. \n";
    cout << "두 제품을 $";
    cout << guest.price + pal.price << "에 드리겠습니다! \n";
    return 0;
}

/*
    구조체

    한명의 농구 선수에 관련된 모든 정보를 저장해야 한다고 가정해보자.
    이를 위해 서는 이름, 연봉, 신장, 평균 득점 수, 자유투 성공률, 어시스트 수 등의 정보를 저장해야 한다.
    이러한 모든 정보를 하나의 단위로 묶을수 있는 데이터 형식이 있으면 좋다.
    배열은 이러한 정보들을 저장하는데 적합하지 않은데, 적합 하지 않은 이유로는 각각의 원소들이 다른 데이터형을 요구하기 때문이다
    배열은 하나의 데이터형을 가지고 배열을 만들기 때문에 이러한 이유로 적합하지 않다. 

    위 문제를 해결 하기 위해서 C++ 는 구조체 라는 데이터형을 소개한다. 
    하나의 구조체 안에는 여러 종류의 데이터를 저장할 수 있기 때문에 배열보다 융통성이 있다.
    농구 선수 한명에 대한 모든 정보를 하나의 구조체에 통합하여 저장할 수 있다.
    더 나아가 팀 전체 선수들의 정보를 처리해야 한다면 구조체의 배열을 만들수 있다. 

    구조체는 사용자가 정의할수 있는 데이터형이다. 
    구조체는 두가지 단계를 거쳐서 생성된다

    * 구조체 서술을(structure description) 정의하는 단계
    --> 이 단계에서는 구조체 안에 저장할 여러 가지 데이터형들을 서술하고 이름을 정한다.
    * 구조체 서술에 따라 구조체 변수 (structure variable) 를 생성하는 단계
    --> 구조체 데이터 객체를 생성하는 단계이다.

    EX) 장난감 회사에서 생산하고 있는 모형풍선 제품에 대한 정보를 나타내 보자.\
    struct inflatable   //구조체 선언문, inflatable 이 새로 만들어진 구조체 데이터형의 이름이 되는것. 
    {
        char name[20];      //  이 리스트에 각 항목을 멤버라고 부른다. 문자열을 저장하는 멤버
        float volume;       //  볼륨을 저장하는 멤버
        double price;       //  값을 저장하는 멤버
    };

    위처럼 템플릿을 만든 다음에는, 그 데이터형의 변수들을 생성할수 있다. 
    EX) 
    inflatable hat;             //
    inflatable woopie_cushion;  //  모두 inflatable 형의 구조체 변수이다. 
    inflatable mainframe;       //

    C 언어는 구조체 변수를 선언할시 struct 을 요구하지만 C++ 는 struct 를 생략할수있다.
    struct inflatable goose;    //c는 키워드 struct 를 요구한다
    inflatable vincent;         //c++ 는 키워드 struct 를 요구하지 않는다. 

    각자의 변수들의 멤버에 접근하고 싶을시 우리는
    hat.volume or hat.price or woopie_cushion.volume
    이런 식으로 접근할수있다. 
*/

/*
    ** OUTPUT
지금 판매하고 있는 모형풍선은 
glorious Gloria와 Audacious Arthur입니다. 
두 제품을 $62.98에 드리겠습니다!
*/
