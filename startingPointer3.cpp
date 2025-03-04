#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
    int nights = 1001;
    int *pt = new int;
    *pt = 1001;

    cout << "nights의 값 = ";
    cout << nights << ": 메모리 위치 " << &nights << endl;
    cout << "int형 ";
    cout << "값 = " << *pt << ": 메모리 위치 = " << pt  <<endl;

    double *pd = new double;
    *pd = 10000001.0; 

    cout <<"double 형 ";
    cout << "값 = " << *pd << ": 메모리 위치 = " << pd << endl;
    cout << "포인터 pd의 메모리 위치: " << &pd << endl;
    cout << "pt의 크기 = " << sizeof(pt);
    cout << ": *pt 의 크기 = " << sizeof(*pt) << endl;
    cout << "pd의 크기 = " << sizeof pd;
    cout << ": *pd의 크기 = " << sizeof(*pd) << endl;  

    return 0;
}


/*
    new를 사용한 메모리 대입
    프로그램을 실행하는 동안에 메모리를 대입하는 기술
    우리는 지금까지 메모리에 접근하기 위해서 대용 이름을 제공한다.
    그러나 이름이 없는 메모리에 대입하는것이 포인터의 진정한 가치이다. 
    c++ 에서는 new 연산자를 사용할수있다. 

    프로그램을 실행하는 동안에 int 형 값을 저장할수 있는 이름이 없는 메모리를 대입하고, 포인터를 사용하여 그 메모리에 접근한다
    어떤 데이터형의 메모리를 원하는지 new 연산자에게 알려주면 new 연산자는 그에 알맞은 크기의 메모리 블록을 찾아내고 그 블록의 주소를 리턴한다
    이 주소를 포인터에 대입하면 된다.

    int * pn = new int; 

    new int 부분은 int 형 데이터를 저장할 새로운 메모리가 필요하다고 프로그램에게 알린다.
    new 연산자는 뒤따르는 데이터형을 보고, 몇 바이트가 필요한지를 파악한다.
    그러고 나서 적당한 메모리를 찾아 필요한 만큼의 블록을 대입하고, 그 주소를 리턴한다.
    리턴되는 주소는 int 형을 지시하는 포인터로 선언되어 있는 pn에 대입된다.
        
*/

/*
    ** OUTPUT
nights의 값 = 1001: 메모리 위치 0x5ffe54
int형 값 = 1001: 메모리 위치 = 0x7d7b90
double 형 값 = 1e+07: 메모리 위치 = 0x7d80b0
포인터 pd의 메모리 위치: 0x5ffe48
pt의 크기 = 8: *pt 의 크기 = 4
pd의 크기 = 8: *pd의 크기 = 8
*/

