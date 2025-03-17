#include <iostream>
using namespace std;
const int Fave = 27;
int main()
{
    int n;

    cout << "1부터 100 까지 범위에서 하나의 수를 알아맞히는 게임입니다. \n";
    cout << "내가 좋아하는 수는 무엇일까요? ";
    do
    {
        cin >> n; 
        if(n < Fave)
            cout << "그것보다 큽니다. 무엇일까요? ";
        else if (n > Fave)
            cout << "그것보다 작습니다. 무엇일까요? ";
        else
            cout << "맞았습니다. 정답은 " << Fave <<  " 입니다.\n";
    }while(n != Fave);
    return 0; 
}

/*
    if else if else 구문
    C++ 에서는 if else 구문을 확장시킬수 있다.
    if(ch == 'A')
        a_grade++;
    else
        if (ch == 'B')
            b_grade++;
        else
            soso++;
    
    위 코드는 다음과 같이 쓰일수도 있다.
    if(ch == 'A')
        a_grade++;
    else if (ch == 'B')
        b_grade++;
    else
        soso++;
    
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
