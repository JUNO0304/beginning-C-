#include <iostream>
#include <cstring>
#include <string>
using namespace std;

char * getname(void);

int main()
{
    char * name;

    name = getname();
    cout << (int *) name << ": " << name << "\n";
    delete []name;

    name = getname();
    cout << (int *) name << ": " << name << "\n";
    delete [] name;

    return 0;
}

char * getname()
{
    char temp[80];
    cout << "이름을 입력하십시오: ";
    cin >> temp;
    char * pn = new char [strlen(temp) + 1];
    strcpy(pn, temp);

    return pn;
}

/*


*/

/*
    ** OUTPUT
이름을 입력하십시오: Fredeldumpkin 
0x6a7b70: Fredeldumpkin
이름을 입력하십시오: Pook
0x6a7b70: Pook
*/
