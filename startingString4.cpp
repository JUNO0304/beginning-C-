#include <iostream>
#include <string>
#include <cstring>
using namespace std;


int main()
{  
    char charr1[20];
    char charr2[20] = "jaguar";
    string str1; 
    string str2 = "panther";
    
    str1 = str2;
    strcpy(charr1, charr2);

    str1 += " paste";
    strcat(charr1, " juice");

    int len1 = str1.size();
    int len2 = strlen(charr1);

    cout << str1 << " 문자열에는 " << len1 << "개의 문자가 들어있다\n";
    cout << charr1 << " 문자열에는 " << len2 << " 개의 문자가 들어있다. \n";


    return 0;
}

/*
    String 클래스에 조작
    strcpy() 함수를 사용하면 문자열을 문자 배열에 복사할수 있었다.
    strcat() 함수를 사용하여 문자열을 문자 배열에 추가할수 있다. 

    strcpy(charr1, charr2);     //charr2를 charr1에 복사한다
    strcat(charr1, charr2);     //charr2의 내용을 charr1에 추가한다

    위 함수들은 모두 #include<cstring> 을 사용하여야 한다 (cstring 헤더 파일이 위 함수들을 지원해 주고 있기때문이다)


    ** 일반적으로는 string 변수를 사용하는것이 더 간단하고 편리하다.
    게다가 배열을 다룰때는 메모리스페이스 까지 염려하며 코드를 짜야하기 때문에 예상하지 못하는 위험들이 늘 함께한다. 

    int len1 = str1.size();         //str1 의 길이를 구한다.
    int len2 = strlen(charr1);      //charr1의 길이를 구한다.
    다른 문법에 주의하자. .size() 인 이유는 .size() 가 string 클래스의 메서드이기 때문이다. 
*/

/*
    ** OUTPUT
panther paste 문자열에는 13개의 문자가 들어있다
jaguar juice 문자열에는 12 개의 문자가 들어있다.

*/
