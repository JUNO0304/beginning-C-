#include <iostream>
using namespace std;
#include <climits>

/*
객체 지향 프로그래밍은 사용자가 데이터형을 설계할수 있다는데 있어 큰 이점이 있다.
이는 사용자가 자신이 프로그래밍 하려고 하는것에 각장 적합한 형태에 데이터형을 설계할수 있기때문이다. 
그러나 위 과정을 제대로 수행하기 위해서는 먼저 C++ 에 내장되어 있는 데이터형들을 제대로 이해하는것이 제일 중요하다.

c++에는 두가지 데이터형이 존재한다.
기본형 그리고 복합형이다. 
기본형은
- 정수를 표현할수 있는 정수형
- 소수부가 있는 수를 표현할수 있는 부동 소수점형이 있다.
*/

/*
챕터 3.1
컴퓨터에 정보를 저장하기 위해서는 세가지의 요소를 알고 있어야 한다.
-어디에 저장되는가?
-어떤 값이 저장되는가?
-어떤 종류의 정보인가?

int braincount;
braincount = 5;
정보의 종류 와 어떤값이 정보에 저장되어있는지를 여기서 알수있다.
어디에 저장되어 있는지는 & 연산자를 배우면 알수있다. 
*/

/*
정수형
정수는 소수부가 없는 수를 뜻한다.
signed 데이터형은 양수값과 음수값을 둘다 나타낼수 있지만
unsigned 데이터형은 양수값만 나타낼수 있다. 
정수를 저장하는데 사용되는 메모리의 크기를 width 라고 부른다. 

씨플플에 기본 정수형을 크기별로 나열할시
char >> short >> int >> long >> long long 순이다.
위 모든 데이터형에 signed 와 unsigned 를 붙일수 있다.


short, int, long, long long 정수형
컴퓨터의 메모리는 비트 단위로 이루어진다.
short 형은 언제나 16 비트
int 형은 최소한 short 만큼은 크다
long 형은 최소한 32비트 폭을 가지며, 최소한 int 만큼은 크다.
long long 형은 최소한 64비트 폭을 가지며, 최소한 long 만큼은 크다.

데이터형의 크기를 알아내는 C++도구 --> sizeof
*/

int main()
{
    
    int n_int = INT_MAX;        //#include <climits> 사용해야, [INT_MAX, SHRT_MAX 와 같은 값을 사용할수있다.]
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    cout << "int는 " << sizeof n_int << " 바이트이다. " << endl;
    cout << "short는 " << sizeof n_short << " 바이트이다. " << endl;
    cout << "long는 " << sizeof n_long << " 바이트이다. " << endl;
    cout << "long long 는 " << sizeof n_llong << " 바이트이다. " << endl;
    cout << endl;

    cout << "최댓값: " << endl;
    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl << endl; 
    cout << "long long: " << n_llong << endl << endl;
    cout << "int의 최솟값 = " << INT_MIN << endl;
    cout << "바이트 당 비트 수 = " << CHAR_BIT << endl; 
    
    return 0; 
}

/*
초기화에 대하여.
선언구문과 대입구문을 한번에 쓰자.
만약에 
    int count;
    count = 7;
과 같은 코드를 짠다면, 변수 count 는 일시적으로 미확정 상태의 변수가 된다.
미확정 상태의 변수라는것은 count 라는 변수가 생성될때 부여받은 메모리 위체에 이미 있었던 값을 count가 가지게 되는것을 뜻한다.

int owls = 101;     // 전통적인 c 스타일의 초기화 문법
int wrens(432);     // C++의 새로운 초기화 문법, wrens 를 432 로 초기화. 
*/
