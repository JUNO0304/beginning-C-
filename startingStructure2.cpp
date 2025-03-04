#include <iostream>
#include <cstring>
#include <string>
using namespace std;

struct inflatable
{
    char name[20];
    float volume;
    double price; 
};

int main()
{
    inflatable bouquet =
    {
        "sunflowers",
        0.20,
        12.49
    };

    inflatable choice;

    cout << "bouquet: " << bouquet.name << " for $";
    cout << bouquet.price << endl;

    choice = bouquet;
    cout << "choice: " << choice.name << " for $";
    cout << choice.price << endl; 

    return 0; 
}

/*
    구조체

   구조체의 기타 특성
   구조체는 함수에 매개변수로 전달할수도 있고, 리턴 값으로도 사용할수 있다. 
   또한 대입 연산자를 사용하여 하나의 구조체를 같은 데이터 형의 다른 구조체에 대입할수도 있다.
   이때에는 한 구조체의 멤버 값들이 상대방 구조체의 해당 멤버에 각각 대입된다.(이때 배열도 대입되는 하나의 멤버가 될수 있다.)
   이와 같은 멤버를 그대로 대입하는것을 (memberwise assignment)라고 부른다.

   구조체 템플릿의 정의와 변수의 생성을 하나로 결합하는법
   struct perks
   {
    int key_number;
    char car[12];
   }; mr_smith, ms_jones;

   구조체 템플릿의 정의와 변수의 초기화를 한번에 같이하는법
   struct perks
   {
    int key_number;
    char car[12];
   }mr_glitz =
    {
        7,
        "Packard"
    };
*/

/*
    ** OUTPUT
bouquet: sunflowers for $12.49
choice: sunflowers for $12.49
*/
