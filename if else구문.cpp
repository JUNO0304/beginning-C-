#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "타이핑하시면, 반복 수행하겠습니다. \n";
    cin.get(ch);
    while(ch != '.')
    {
        if(ch == '\n')
            cout << ch;
        else
            cout << ++ch;
        cin.get(ch);
    }
    cout << "\n 혼란스럽게 해서 죄송합니다. \n";
    cin.get();
    cin.get();
    return 0; 
}

/*
    if else 구문

    if else 구문의 구문은 다음과 같다
    if (test-condition)
        statement1
    else
        statement2
    
    if else 구문의 작성 스타일
    만약 if 와 else 에 들어가는 구문이 단일 구문이 아니라면 반드시 중괄호로 그들을 묶어주어야 한다
    그렇게 하지 못할시 컴파일러는 에러를 일으킨다.
    if(ch == 'Z')
        zorro++;
        cout << "또 한명의 Zorro 후보 \n";
    else
        dull++
        cout << "Zorro 후보가 아니다 \n";
    위 코드는 에러를 일으킨다.
    컴파일러는 if 구문이 끝났다고 생각하고 if가 없는 else 구문을 맞이하게 된다. 
    
*/

/*
    OUTPUT
타이핑하시면, 반복 수행하겠습니다. 
An ineffable joy suffused me as I behold 
Bo!jofggbcmf!kpz!tvggvtfe!nf!bt!J!cfipme
the wonders of modern computing.
uif!xpoefst!pg!npefso!dpnqvujoh
 혼란스럽게 해서 죄송합니다. 

*/
