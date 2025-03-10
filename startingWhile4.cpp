#include <iostream>
#include <string>
#include <ctime> 
using namespace std;
 
int main()
{
    char ch;
    int count = 0; 
    cout << "문자들을 입력하시오; 끝내려면 #을 입력하시오: \n";
    cin >> ch;
    while (ch != '#')
    {
        cout << ch;
        ++count;
        cin >> ch; 
    }
    cout << endl << count << " 문자를 읽었습니다. \n";
    return 0; 
}

/*
    루프와 텍스트 입력
    키보드로부터 텍스트를 입력받기 위해 루프를 사용할 경우에, 프로그램은 입력이 언제 끝나는지를 알아야한다.
    한가지 방법은 표지 문자 (sentinel character) 라고 부르는 특수 문자를 입력 중지 신호로 사용하는것이다.
    
    cin 은 개행문자, 빈칸 문자들을 무시하고 건너뛴다. 
*/

/*
    OUTPUT
문자들을 입력하시오; 끝내려면 #을 입력하시오: 
see ken run#really fast 
seekenrun
9 문자를 읽었습니다.
*/
