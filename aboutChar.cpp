#include <iostream>
#define ZERO 0
#include <climits>
using namespace std;

int main()
{
    char ch = 'M';
    int i = ch;
    cout << "ASCII code of " << ch << " is " << i << endl;

    cout << "I will add 1 to this letter " << endl;
    ch = ch + 1;
    i = ch;
    cout << "ASCII code of " << ch << " is " << i << endl;

    cout << "cout.put(ch) 를 사용하여 char형 변수 ch를 화면에 출력: ";
    cout.put(ch);

    cout.put('!');

    cout << endl << "종료" << endl;
    return 0; 
}


/*
char형 문자와 작은 정수
char 데이터형은 사실 정수이다. 가지고 있는 정수를 ASCII 에 기반하여 문자 상수로 바꾸는것뿐이다. 

멤버함수 cout.put()
멤버함수는 클래스에 속한다. 
cout.put() 은 왜 필요한가?
옜날에는 그냥 cout 으로 출력할시 오류가 났었기 때문이다. 
*/  
