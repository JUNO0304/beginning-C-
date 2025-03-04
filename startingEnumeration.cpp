#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{


    return 0;
}


/*
    열거체

    enum spectrum {red, orange, yellow, green, blue, violet, indigo, ultraviolet};
    위 구문은 두가지 일을 수행한다
    *spectrum 을 새로운 데이터형의 이름으로 만든다. enum형 변수를 열거체(enumartion) 이라 부른다
    ** red, orange, yellow, ... 등을 0에서 7까지의 정수 값을 각각 나타내는 기호 상수로 만든다. 이 상수들을 열거자 (enumeration) 이라 부른다. 
    기본적으로 첫번째 열거자에 0이 대입되고, 두번쨰 열거자에 1 이 대입되는 방식으로 정수값들이 차례로 대입된다.
    spectrum band;


    열거체 변수의 특성

    열거체 변수에는 그 데이터형을 정의하는데 사용된 열거자 값들만 대입할수 있다.
    band = blue;
    band = 2000;    //2000 은 열거자가 아니라 틀리다.

    열거체는 대입 연산자 말고는 아무런 연산자를 사용할수없다.

    열거자들은 정수형이며 int 형으로 승급될수 있다.
    int color = blue;   // spectrum 이 int 형으로 승급된다
    band = 3;           // 틀리다. 
    color = 3 + red'    // red 가 int 형으로 승급된다


    열거자 값의 설정
    대입 연산자를 사용하여 열거자의 값을 명시적으로 지정할수 있다
        enum bits{one = 1, two = 2, four = 4, eight =8};
        enum bigsteps{first, second = 100, third};  //여기서 third 는 101 이 된다
    
        
*/

/*
    ** OUTPUT

*/

