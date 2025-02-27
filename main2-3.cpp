#include <iostream>
using namespace std;

int main()
{
    int carrots;

    cout << "당근을 몇 개나 가지고 있니?" << endl;
    cin >> carrots; //c++입력
    cout << "여기 두 개가 더 있다.  ";
    carrots = carrots + 2; 
    cout << "이제 당근은 모두 " << carrots << "개이다." << endl; 

    return 0; 
}

/*
cin 은 사용자가 프로그랩에 입력하여 어떠한 특정 데이터형의 변수에 값을 집어 넣는것이다.
이 경우에는 carrots 라는 정수형의 변수에게 우리가 값을 입력할수 있다.
그러나 carrots 는 정수형이기때문에 정수가 아닌 다른 형태의 문자들을 집어 넣으면 오류가 뜬다.



*/
