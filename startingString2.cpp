#include <iostream>
#include <string>
using namespace std;


int main()
{  
    char charr1[20];
    char charr2[20] = "jaguar";
    string str1;
    string str2 = "panther";

    cout << "고양이와 동물 한 종을 입력하시오: ";
    cin >> charr1;
    cout << "고양이과의 또 다른 동물 한 종을 입력하시오: ";
    cin >> str1;
    cout << "아래 동물들은 모두 고양이과입니다: \n";
    cout << charr1 << " " << charr2 << " " << str1 << " " << str2 << endl;
    cout << charr2 << " 에서 세번째 글자: "<< charr2[2] << endl;
    cout << str2 << " 에서 세번째 글자: " << str2[2] << endl; 

    return 0;
}

/*
    string 클래스

    새로 생긴 C++ 에서는 string 클래스를 만들어서 문자열을 저장하는 string 형 변수를 사용할수 있게되었다.
    string 클래스를 사용하려면 프로그램에 string 헤더 파일을 포함시켜야 한다.

    여러 면에서 string 객체를 문자 배열과 동일한 방식으로 사용할수 있다는 사실을 이 예제를 통해 배워야 한다.
    str1 선언은 길이가 0인 string 객체를 생성한다.
    그러나 이 프로그램은 입력을 읽어 str1 의 크기를 자동으로 조절한다.

    string 클래스는 하나의 객체를 다른 string 객체에 간단하게 대입할수도 있다.
    char charr1[20];
    char charr2[20] = "jaguar";
    string str1; 
    string str2 = "panther";
    charr1 = charr2;    //이건 틀리다
    str1 = str2;        // 그러나 이건 가능하다.

    심지어 여기서 끝이 아니라 연산자 (+, -) 를 사용하여 string 객체를 덧붙일수도 있다.

    string str3; 
    str3 = str1 + str2;     //결합된 두 string 객체를 str3 에 대입한다
    str1 += str2;           //str1 의 끝에 str2 를 추가한다
*/

/*
    ** OUTPUT
고양이와 동물 한 종을 입력하시오: ocelot 
고양이과의 또 다른 동물 한 종을 입력하시오: tiger
아래 동물들은 모두 고양이과입니다: 
ocelot jaguar tiger panther
jaguar 에서 세번째 글자: g
panther 에서 세번째 글자: n

*/
