#include <iostream>
#include <cstring>
using namespace std;


int main()
{  
    const int ArSize = 20; 
    char name [ArSize];
    char dessert[ArSize];

    cout << "이름을 입력하십시오: \n";
    cin.get(name, ArSize).get();
    cout << "좋아하는 디저트를 입력하십시오: \n";
    cin.get(dessert, ArSize).get();
    cout << "맛있는 " << dessert;
    cout << " 디저트를 준비하겠습니다. " << name << "님! \n";

    return 0;
}

/*
    const int ArSize = 20; 
    char name [ArSize];
    char dessert[ArSize];

    cout << "이름을 입력하십시오: \n";
    cin >> name;
    cout << "좋아하는 디저트를 입력하십시오: \n";
    cin >> dessert;
    cout << "맛있는 " << dessert;
    cout << " 디저트를 준비하겠습니다. " << name << "님! \n";

    cin 이 문자열을 인식하는 방법때문에 이프로그램에서는 오류가 생긴다.
    키보드로는 끝내기 널 문자를 입력할수 없기에 cin에게 문자열의 끝을 알려주는 다른수단이 필요하다. 
    그래서 cin 은 빈칸, 탭, 캐리지 리턴과 같은 화이트스페이스가 있으면 그 위치에서 문자열이 끝난것으로 간주한다.abort

    위 프로그램에서 cin 은 Alistair 를 첫번째 온전한 문자열로 읽어서 name 배열에 저장한다.
    Dreeb은 입력 큐 에 그대로 남겨 놓는다. 
    좋아하는 디저트에 대한 응답을 얻기 위해 cin 이 다시 입력큐를 검사할때 , 그때까지 입력 큐에 남아 있던 Dreeb 을 두번째 문자열로 읽어 dessert 배열에 저장한다. 

    이러한 문제들을 어떻게 해결할수 있는가?
    getline() 과 get () 함수를 사용할수있다. (istream 클래스가 제공한다)
    
    getline() 함수는 ENTER 키에 의해 전달되는 개행문자를 입력의 끝으로 간주하여 한 행 전체를 읽는다.
    getline() 함수는 두개의 매개변수를 받는다. 
    --> 입력한 행을 저장할 배열의 이름
    --> 입력받을 문자들의 한계

    예를 들어, getline() 함수로 이름을 읽어 20개의 원소를 가진 name 배열에 저장하고 싶다면 다음과 같이 호출하라
    cin.getline(name,20);

    *get() 함수
    getline() 함수와 똑같이 작동하지만 하나 다른게 있다면 이 함수는 개행 문자를 읽어서 버리지 않고 입력 큐에 그대로 남겨둔다.
    cin.get(name, ArSize);
    cin.get(dessert, ArSize);
    첫번째 호출이 개행문자를 버리지 않고 그대로 남겨놓기 때문에 
    두번째 호출은 입력큐에 들어가자마자 개행문자를 마주치게 된다
    그래서 두번째 호출은 아무것도 읽지않고 바로 행의 끝에 도달했다고 결론을 짓고 작동을 멈춘다.
    이를 해결하기위해
    cin.get(name, ArSize);
    cin.get()   // 이 구문이 개행문자를 읽고 처리한다.
    cin.get(dessert, ArSize);
*/

/*
    ** OUTPUT
이름을 입력하십시오: 
Alistair Dreeb 
좋아하는 디저트를 입력하십시오: 
맛있는 Dreeb 디저트를 준비하겠습니다. Alistair님!

*/
