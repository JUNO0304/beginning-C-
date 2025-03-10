#include <iostream>
using namespace std;
 
int main()
{
    cout << "정수를 하나 입력하십시오: ";
    int  by;
    cin >> by;
    cout << "갱신크기 " << by  << "s:\n";
    for(int i = 0; i < 100; i = i + by)
        cout << i << endl;
    return 0; 
}

/*
    갱신 크기 변경


*/

/*
    OUTPUT
정수를 하나 입력하십시오: 17
갱신크기 17s:
0
17
34
51
68
85

*/
