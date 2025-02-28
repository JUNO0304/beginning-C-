#include <iostream>
#define ZERO 0
#include <climits>
using namespace std;

int main()
{
    short Dohee = SHRT_MAX;     //도희는 받을수 있는 최댓값이 32767이다.
    unsigned short Insuk = Dohee;   //인숙이는 받을수 있는 최댓값이 65535이다.

    cout << "도희의 계좌에는 " << Dohee << "원이 들어있고, " ;          
    cout << "인숙이의 계좌에도 " << Insuk << "원이 들어있다" << endl;
    cout << "각각의 계좌에 1원씩 입금한다. " << endl << "이제 ";
    Dohee = Dohee + 1;          //도희는 이미 자신이 가지고 있는 데이터형의 최댓값인 32767을 가지고 있으니 여기에 +1을 하면 다시 음수로 돌아가 -32768 이 된다
    Insuk = Insuk + 1;          //반면에 인숙이는 아직 최댓값에 도달하지 못하였기에 +1을 해도 음수의 영역으로 가지 않는다. 
    cout << "도희의 잔고는 " << Dohee << "원이 되었고, " ;
    cout << "인숙이의 잔고는 " << Insuk << "원이 되었다" << endl;
    cout << "이럴수가! 도희가 나 몰래 대출을 했나?" << endl;
    Dohee = ZERO; 
    Insuk = ZERO;
    cout << "도희의 계좌에는 " << Dohee <<  "원이 들어있고."; 
    cout << "인숙이의 계좌에도 " << Insuk << "원이 들어있다." << endl;
    cout << "각각의 계좌에서 1원씩 인출한다." << endl << "이제 ";
    Dohee = Dohee - 1;      // 도희의 데이터형은 음수를 저장할수 있기에 -1을 할시 -1 이 된다.
    Insuk = Insuk -1;       // 인숙이의 데이터형은 음수를 저장할수 없기에 -1을 할시 최댓값인 65535로 가게 된다.
    cout << "도희의 잔고는 " << Dohee << "원이 되었고. ";
    cout << "인숙이의 잔고는 " << Insuk << "원이 되었다." << endl;
    cout << "이럴수가! 인숙이가 복권에 당첨되었나?" << endl;


    return 0;
}

/*
    Unsigned 형에 대하여
    이미 설명된 세가지 정수형은 모두 음의 정수값을 저장할수 없는 Unsigned 변형을 하나씩 가지고 있다.
    예를 들어 short 형이 -32768 에서 32767 까지의 범위를 저장할수 있다면.
    근데 만약에 우리가 unsigned short 를 사용할시 우리가 저장할수 있는 최댓값을 늘릴수 있게된다. 

*/
