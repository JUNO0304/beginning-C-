#include <iostream>
#include <string>
#include <ctime> 
using namespace std;
 
int main()
{
    char ch;
    int count = 0; 
    cout << "문자들을 입력하시오; 끝내려면 #을 입력하시오: \n";
    cin.get(ch);
    while (ch != '#')
    {
        cout << ch;
        ++count;
        cin.get(ch); 
    }
    cout << endl << count << " 문자를 읽었습니다. \n";
    return 0; 
}

/*
    cin.get(char) 를 이용한 입력
    일반적으로 문자 단위로 입력을 읽어들이는 프로그램들은 빈칸 문자, 탭 문자, 개행 문자까지 포함하여 모든 문자를 읽어들여야 한다. 
    istream 클래스는 이러한 요소들을 충족시키는 멤버함수들을 가지고 있다.
    cin.get(ch) 멤버 함수는 빈칸 문자까지도 입력받아 ch 변수에 저장한다.
*/

/*
    OUTPUT
문자들을 입력하시오; 끝내려면 #을 입력하시오: 
see ken run#really fast 
seekenrun
9 문자를 읽었습니다.
*/
