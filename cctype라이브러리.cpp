#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    cout << "분석할 텍스트를 입력하십시오. "
            "입력의 끝을 @으로 표시하십시오. \n";
    char ch;
    int whitespace = 0;
    int digits = 0;
    int chars = 0;
    int punct = 0;
    int others = 0; 

    cin.get(ch);
    while(ch != '@')
    {
        if(isalpha(ch))
            chars++;
        else if(isspace(ch))
            whitespace++;
        else if(isdigit(ch))
            digits++;
        else if(ispunct(ch))
            punct++;
        else
            others++;
        cin.get(ch);
    }
    cout << "알파벳 문자 " << chars << ", "
        << "화이트스페이스 " << whitespace << ", "
        << "숫자 " << digits << ", "
        << "구두점 " << punct << ", "
        << "기타 " << others << endl; 

    return 0;
}


/*
    문자 함수를 위한 cctype 라이브러리
    문자관련 함수들의 패키지들은 cctype 에 정의되어 있다.
    그 함수들은 어떤 문자가 대문자인지, 숫자인지, 구두점 문자인지 등을 판별하는 작업들을 간단하게 처리한다.
    isalpha(ch) 함수는 ch 가 알파벳 문자이면 0 이 아닌값을 그렇지 않으면 0을 리턴한다.
    ispunct(ch) 함수는 ch가 콤마나 마침표와 같은 구두점 문자이면 참 값을 리턴한다.
    위 함수들은 and 와 or 연산자보다 더욱 편리하다.
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'));
    와 같은 구문은 다음과 같이 쓰일수 있다.
    if(isalpha(ch))

*/

/*
    OUTPUT
분석할 텍스트를 입력하십시오. 입력의 끝을 @으로 표시하십시오. 
AdrenalVision International producer Adrienne Vismonger announced prodcution of their new 3-D film, a remake of "My Dinner with Andre," scheduled for 2013.    
"Wait until you see the new scene with enraged Collossipede!" @
알파벳 문자 172, 화이트스페이스 32, 숫자 5, 구두점 9, 기타 0

*/
