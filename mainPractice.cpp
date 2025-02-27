#include <iostream>
#include <string.h>
using namespace std;


//이름과 주소를 출력하는 C++ 프로그램


int main()
{
    string name;
    char address[25];

    cout << "이름을 입력하세요: " << endl;
    cin >> name;


    cout << "주소를 입력하세요: " << endl;
    cin.getline(address, 25);  

    cout << "이름: " << name << endl << "주소: " << address << endl; 

    return 0; 
}
