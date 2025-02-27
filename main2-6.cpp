#include <iostream>
using namespace std;
void simon (int);


int main()
{
    simon(3);
    cout << "정수를 하나 고르시오: ";
    int count;
    cin >> count;
    simon(count);
    cout << "끝! " << endl;
    return 0; 

    return 0; 
}

void simon (int n)
{
    cout << "Simon 왈, 발가락을 " << n << "번 두드려라." << endl;

}

/*
    void simon (int n);
    위 구문은 함수가 아무런 값을 리턴하지 않는다는것을 알려주고있다.
    simple = simon(3);
    void 함수이기때문에 이런식으로 사용할수 없다

    어떠한 특정 값을 리턴하는 함수는 그 값을 리턴하기 전까지 끝나지 않는다.
    그렇기 때문에 우리가 int main() 함수에 return 0를 넣는것이다.
    하지만 이 0이라는 값은 어디로 리턴되는것일까?
    int main() 이라는 함수를 아무도 부르고 있지 않는데 말이다.
    운영체제가 이 프로그램을 호출한다고 생각하면 된다. 많은 운영체제가 프로그램이 리턴하는 값을 처리할수 있다.


*/
