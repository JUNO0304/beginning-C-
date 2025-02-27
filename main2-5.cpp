#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double area;
    cout << "마루 면적을 평방피트 단위로 입력하시오: ";
    cin >> area;
    double side;
    side = sqrt(area);
    cout << "사각형 마루라면 한 변이 " << side << "피트에 상당합니다." << endl;
    cout << "멋지네요!" << endl;

    return 0; 
}

/*
함수에 대하여
함수는 크게 두가지 부류가 있다.
리턴값이 있는 함수와 리턴값이 없는 함수이다. 

** 리턴값이 있는 함수
sqrt() 라는 함수는 어떤수의 제곱근을 리턴하는 함수이다.
예시로서 내가 6.25의 제곱근을 구하여 변수 x에 대입해야 한다고 가정해봤을때.

x = sqrt(6.25);

라고 적을수있다.
여기서 sqrt() 라는 표현이 함수를 호출한다 (funcation call)
sqrt() 함수는 (called function) 이라고 불린다.

함수에 전달되는 값을 우리는 argument 또는 parameter 라고 부른다.
그리고 돌렬받는 값을 우리는 return value 즉 리턴값이라고 한다.
근데 여기서 리턴값의 데이터 형도 굉장히 중요하다. 문자열인지, 정수인지, 소수인지 아무도 모르기 때문에 우리는 이 데이터형을
function prototype 으로 미리 정하고 시작한다.

double sqrt(double);

- 앞에 있는 double 은 함수가 double 형의 값을 리턴한다는 뜻이고.
괄호 안에 있는 double 은 sqrt() 함수가 double 형의 매개변수를 전달받는다는 뜻이다.

함수원형은 함수가 어떤값을 리턴 받고 어떤 매개변수를 전달하는지를 알려주는 반면에
함수정의는 함수가 전달받은 매개변수로 무슨작업을 처리하는지를 정의하는것이다. 

값을 리턴하지 않는 함수도 있다.
void 함수를 사용하면 아무것도 리턴하지 않아도 된다. 


*/
