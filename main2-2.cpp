#include <iostream>
using namespace std;

int main()
{
    int carrots; // 정수 변수를 "선언"한다

    carrots = 25; // 변수에 값을 대입한다.
    cout << "나는 당근을 ";
    cout << carrots; 
    cout << "개 가지고 있다." << endl;
    carrots = carrots - 1; //변수의 값을 변경한다
    cout << "아삭아삭, 이제 당근은 " << carrots << "개이다." << endl;


    return 0; 
}

/* 선언구문과 대입구문(declaration argument and assignment argument) 
 
컴퓨터가 정보를 정리하려면 (memory storage)을 얼마나 차지하는지 알아야한다. 
이것을 쉽게하는법이 선언구문을 사용하는것이다. 
선언구문은 정보를 저장할 기억 공간의 형태를 지정하고, 그위치가 어디인지 말해주는 꼬리표(label) 를 제공한다.

int carrot; 에서 int라는 레이블로 하나의 정수를 저장할수 있는 기억공간을 프로그램이 사용할것이라고 알려준다. 
** int 는 소수부가 없다.  (정수이다) 
** 양의 정수와 음의 정수가 있다. 

carrots 는 변수라고 한다. 

대입구문
대입구문은 기억위치에 어떤값을 대입한다.
변수 carrots으로 나타나는 기억위치에 정수 25를 대입한다. 
여기서 등호 (=) 는 대입 연산자 (assignment operator) 라고 부른다. 
우리는 대입 연산자를 연이어 사용할수있다.

int steinway;
int baldwin;
int yamaha;
yamaha = baldwin = steinway = 88;

위 구문들은 유효하다. 


cout << carrots;
cout 는 carrots 를 정수 25로 대체하고;
정수 25 를 적당한 출력 문자 2 와 5 로 변환한다. 
정수 25와 문자열 "25"는 완전히 다른것이다. 
문자열 "25" 는 문자 '2' 와 '5' 를 따로 출력해서 붙여놓은것이고
정수 25는 25 라는 수를 하나의 2진수로 저장한다.

*/
