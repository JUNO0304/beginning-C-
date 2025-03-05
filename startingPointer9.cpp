#include <iostream>
#include <cstring>
#include <string>
using namespace std;

struct antarctica_years_end
{
    int year;
};

int main()
{
    antarctica_years_end s01, s02, s03;
    s01.year = 1998;
    antarctica_years_end *pa = &s02; 
    pa -> year =1999;
    antarctica_years_end trio[3];
    trio[0].year = 2003;
    cout << trio->year << endl;     //trio 는 주소를 가지고 있는 배열이기 때문에 trio.year를 할수 없다. 
    const antarctica_years_end * arp[3] = {&s01, &s02, &s03};
    cout << arp[1] -> year << endl;
    const antarctica_years_end ** ppa = arp; 
    auto ppb = arp;
    cout << (*ppa) ->year << endl;
    cout << (*(ppb+1))->year << endl; 
    return 0; 
}


/*
    변수형의 조합
    struct antarctica_years_end
    {
        int year;
    };

    다음과 같은 변수를 생성할수 있다
    antarctica_years_end s01, s02, s03; 
    이러한 구조체에 대한 포인터를 생성할 수있다.
    antarctica_years_end *pa = &s02; 
    포인터가 유효할경우 멤버십 연산자를 사용하여 멤버에 접근이 가능하다
    pa -> year = 1999;
    구조체에 배열을 생성할수 있다.
    antarctica_years_end trio[3];
    포인터 배열을 생성할수 있다
    const antarctica_years_end * arp[3] = {&s01, &s02, &s03};
    배열에 대한 포인터를 생성할수 있다.
    const antarctica_years_end **ppa = arp; 
*/

/*
    ** OUTPUT
이름을 입력하십시오: Fredeldumpkin 
0x6a7b70: Fredeldumpkin
이름을 입력하십시오: Pook
0x6a7b70: Pook
*/
