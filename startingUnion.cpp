#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{


    return 0;
}


/*
    공용체

    공용체는 서로 다른 데이터형을 한번에 한가지만 보관할수 있는 데이터 형식이다. 
    구조체는 int, long, double 형을 한꺼번에 보관가능하지만
    공용체는 int, long, dobule 형중에서 한가지만 보관할수있다는 뜻이다. 

    union one4all
    {
        int int_val; 
        long long_val; 
        double double_val;
    };
    one4all 변수는 int 형이나 long 형이나 double 형을 보관할수 있지만, 어느 한시점에 어느 한가지만 보관할수있다
    one4all pail;
    pail.int_val = 15;      //int 형을 저장
    cout << pail.int_val;
    pail.double_val =1.38;  //double 형을 저장, int형값은 소실
    cout << pail.double_val;

    struct widget
    {
        char brand[20];
        int type;
        union id
        {  
            long id_num;
            char id_char[20];
        }; id_val;
    };
    ...
    widget.prize; 
    ...
    if(prize.type == 1)
        cin >> prize.id_val.id_num;
    else
        cin >> prize.id_val.id_char;

    익명 공용체 버전

    struct widget
    {
        char brand[20];
        int type;
        union
        {  
            long id_num;
            char id_char[20];
        }; 
    };
    ...
    widget.prize; 
    ...
    if(prize.type == 1)
        cin >> prize.id_num;
    else
        cin >> prize.id_char;
*/

/*
    ** OUTPUT

*/

