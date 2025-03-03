#include <iostream>
#include <string>
#include <cstring>
using namespace std;


int main()
{  
    char charr[20];
    string str;

    cout << "입력 이전에 charr에 있는 문자열의 길이: " << strlen(charr) << endl;
    cout << "입력 이전에 str 에 있는 문자열의 길이: " << str.size() << endl; 
    cout << "텍스트 한행을 입력하시오: \n";
    cin.getline(charr, 20);
    cout << "입력한 텍스트: " << charr << endl;
    cout << "또 다른 텍스트 한행을 입력하시오: \n";
    getline(cin,str);       //이때 cin 은 길이 지정자가 아니라 매개변수
    cout << "입력한 텍스트: " << str << endl;
    cout << "입력 이후에 charr 에 있는 문자열의 길이: " << strlen(charr) << endl;
    cout << "입력 이후에 str 에 있는 문자열의 길이: " << str.size() << endl;


    return 0;
}

/*
    프로그램 입력 이전에 charr 배열에 있는 문자열의 길이가 3이라고 출력하는데 이러한 이유는
    1) 초기화되지 않은 배열의 내용은 정의되지 않고
    2) strlen() 함수는 배열의 첫번쨰 원소에서 출발하여 널 문자에 도달할 때까지의 바이트들을 카운트한다

    초기화 되지 않은 string의 문자열의 길이는 항상 0으로 세팅된다.

    왜 getline(cin, str); 구문에는 도트표시가 없을까?
    여기서 사용된 getline 은 istream 클래스에 메서드가 아니라는 뜻이다.
    이 구문은 입력을 어디에서 찾을까하는 매개변수로 cin 을 사용하고, string 객체는 문자열에 맞게 문자열의 크기를 자동으로 조절하기 때문에 
    문자열의 크기를 나타내는 매개변수는 없다

    왜 하나는 istream의 클래스 메서드를 쓰고 하나는 다른 getline()을 썼을까?
    istream 클래스는 string 클래스가 추가되기 전부터도 존재한 오래된 클래스이다. 
    그러므로 istream 클래스는 string 데이터형을 인식하지 못한다. 
*/

/*
    ** OUTPUT
입력 이전에 charr에 있는 문자열의 길이: 3
입력 이전에 str 에 있는 문자열의 길이: 0
텍스트 한행을 입력하시오:
peanut butter
입력한 텍스트: peanut butter
또 다른 텍스트 한행을 입력하시오:
blueberry jam
입력한 텍스트: blueberry jam
입력 이후에 charr 에 있는 문자열의 길이: 13
입력 이후에 str 에 있는 문자열의 길이: 13

*/

