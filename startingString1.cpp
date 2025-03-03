#include <iostream>
#include <cstring>
using namespace std;


int main()
{  
    const int SIZE = 15;
    char name1[SIZE];
    char name2[SIZE] = "C++owboy";

    cout << "안녕하세요 ! 저는 " << name2;
    cout << "입니다! 실례지만 성함이?\n";
    cin >> name1;
    cout << "아, " << name1 << " 씨! 당신의 이름은 ";
    cout << strlen(name1) << "자입니다만 \n";
    cout << sizeof (name1) << "바이트 크기의 배열에 저장되었습니다. \n";
    cout << "이름이 " << name1[0] << "자로 시작되는군요. \n";
    name2[3] = '\0';
    cout << "제 이름의 처음 세 문자는 다음과 같습니다: ";
    cout << name2 << endl;

    return 0;
}

/*
    문자열
    문자열이란 메모리에 바이트 단위로 연속적으로 저장되어 있는 문자들을 말한다. 
    이때 문자열을 구성하는 각 문자들은 배열의 원소에 하나씩 저장된다. 
    **모든 문자열의 마지막 문자가 반드시 널 문자(null character) 여야 한다. \0
    char dog[8] = {'b', 'e', 'a' , 'u', 'x', ' ' , 'I' , 'I'};  // 문자열이 아니다.
    char dog[8] = {'b', 'e', 'a' , 'u', 'x', ' ' , 'I' , 'I', '\0'};  // 문자열이다.
    
    위 방식으로 문자열을 저장하는 방법은 굉장히 성가실뿐더러 오래걸린다.
    이보다 더 획기적인 방식으로 문자열을 저장하는법이 있는데 그것은
    char bird[11] = "Mr.cheeps";    //\0을 저장한다
    char fish[] = "Bubbles";        // 컴파일러가 알아서 저장한다
    //int num_elements = sizeof fish / sizeof(char)

    위와 같은 방식을 우리는 문자열 상수라고 표현한다.
    큰 따옴표를 사용하는것을 문자열 상수
    작은 따옴표를 사용하는것을 문자 상수 라고 한다
    문자열 상수와 문자 상수는 서로 바꾸어 쓸수 없다. 
    's' 와 같은 문자 상수는 그 문자에 해당하는 수치 코드를 나타내는것이며 아스키 코드로 'S' 는 83이다 
    char shirt_size = 'S';  // 이 경우는 인정이 된다. 

    그러나 shirt_size 에 "S" 는 두개의 문자 (S 와 \0)으로 구성된 문자열을 나타내기 때문에 호환이 불가하다. 
    큰 따옴표는 또한 그 문자열이 저장되어 있는 메모리 주소를 나타내므로 일치하지 않는다.

    *문 자열 상수의 결합
    씨쁠쁠에서는 큰따옴표로 묶인 두 문자열을 하나로 결합할수있다. 
    빈칸, 탭, 캐리지, 리턴과 같은 화이트스페이스 로 분리된 두 개의 문자열 상수는 하나의 문자열 상수로 결합된다. 
    cout << "I'd give my right arm to be " " a great violinist. \n";
    cout << "I'd give my right arm to be a great violinist. \n";
    cout << "I'd give my right ar" "m to be a great violinst. \n";
    위 세 구문의 출력은 동일하다.

    *strlen() 함수
    strlen() 함수는 널 문자는 제외하고 배열에 저장된 문자열의 크기를 리턴한다.
*/

/*
    ** OUTPUT
안녕하세요 ! 저는 C++owboy입니다! 실례지만 성함이?
Junho
아, Junho 씨! 당신의 이름은 5자입니다만 
15바이트 크기의 배열에 저장되었습니다.
이름이 J자로 시작되는군요.
제 이름의 처음 세 문자는 다음과 같습니다: C++

*/
