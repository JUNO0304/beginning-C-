#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    cout << "단어 하나를 입력하십시오: ";
    string word; 
    cin >> word; 

    for (int i = word.size() - 1; i >= 0; i--)
        cout << word[i];
    cout << "\n종료. \n";
    return 0; 
}

/*
    For 루프를 사용한 문자열 처리
    for 루프를 사용하여 문자열을 구성하는 문자들에 차례대로 접근할수있다. 

*/

/*
    OUTPUT
단어 하나를 입력하십시오: animal 
lamina
종료.

*/
