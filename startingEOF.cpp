#include <iostream>
#include <string>
#include <ctime> 
using namespace std;
 
int main()
{
    char ch;
    int count = 0;
    cin.get(ch);
    while (cin.fail() == false)
    {
        cout << ch;
        ++count;
        cin.get(ch);
    }
    cout << count << "문자를 읽었습니다. \n";
    return 0; 
}

/*
    파일 끝 (End-Of-File) 조건
    C++ 의 입력 기능 은 운영체제의 도움을 받아 입력이 파일의 끝에 도달했을 때 이를 인식하고, 그 정보를 프로그램에 전달할 수있다.
    많은 운영 체제들이 리디렉션 기능을 제공하므로 키보드 입력을 파일로 대체할 수 있다는 점이다.
    예를 들어
    gofish.exe 라는 실행 파일과 fishtale 이라는 텍스트 파일이 있다고 가정했을때
    gofish < fishtale
    이라고 명령하면 gofish 프로그램은 키보드로부터 입력받지 않고 fishtale 파일로부터 입력받는다. 
*/

/*
    OUTPUT
The green bird sings in the Winter 
The green bird sings in the Winter
Yes, but the crow flies in the dawn.
Yes, but the crow flies in the dawn.
^Z
72문자를 읽었습니다. 
*/
