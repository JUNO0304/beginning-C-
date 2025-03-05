#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
    char animal[20] = "bear";
    const char * bird = "wren";
    char *ps;

    cout << animal << " and ";
    cout << bird << "\n";
    //cout << ps;               //쓰레기를 출력하거나 먹통이 될수도 있다

    cout << "동물의 종류를 입력하십시오: ";
    cin >> animal;

    ps = animal;
    cout << ps << "s!\n";
    cout << "strcpy() 사용전: \n";
    cout << (int *) animal << ": " << animal << endl;
    cout << (int *) ps << ": " << ps << endl; 

    ps = new char[strlen(animal) + 1];
    strcpy(ps, animal);
    cout << "strcpy() 사용 후: \n";
    cout << (int *) animal << ": " << animal << endl;
    cout << (int *) ps << ": " << ps << endl ;
    delete [] ps;
    return 0;
}


/*
    포인터와 문자열
    char flower[10] = "rose";
    cout << flower << "s are red \n";
    배열 이름은 첫번째 원소의 주소이다.
    여기서 cout 구문에 있는 flower는 문자 r 가 들어있는 char형 원소의 주소이다.
    cout 구문은 널 문자를 만날때까지 계속해서 출력한다. 

    const char * bird = "wren"      // bird 에 문자열의 주소가 들어있다.
    "wren" 은 실제로 그 문자열의 주소를 나타낸다.

    cout 에 포인터를 전달하면 주소가 출력된다.
    그러나 포인터가 char * 형일 경우 에는 그 포인터가 지시하는 문자열이 출력된다.
    
*/

/*
    ** OUTPUT
bear and wren
동물의 종류를 입력하십시오: fox 
foxs!
strcpy() 사용전:
0x5ffe30: fox
0x5ffe30: fox
strcpy() 사용 후:
0x5ffe30: fox
0x6f8140: fox
*/

