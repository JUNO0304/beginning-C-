#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <array>
using namespace std;


int main()
{
    double a1[4] = {1.2, 2.4, 3.6, 4.8};
    vector<double> a2(4);
    a2[0] = 1.0/3.0;
    a2[1] = 1.0/5.0;
    a2[2] = 1.0/7.0;
    a2[3] = 1.0/9.0;
    array<double, 4> a3 = {3.14, 2.72, 1.62, 1.41};
    array<double, 4> a4; 
    a4 = a3;

    cout << "a1[2]: " << a1[2] << " at " << &a1[2] << endl; 
    cout << "a2[2]: " << a2[2] << " at " << &a2[2] << endl; 
    cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl; 
    cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl; 

    cout << endl << endl;

    a1[-2] = 20.2;
    cout << "a1[-2]: " << a1[-2] << " at " << &a1[-2] <<endl;
    cout << "a3[2]: " << a3[2] << " at " << &a3[2] <<endl;
    cout << "a4[2]: " << a4[2] << " at " << &a4[2] <<endl;
    
    return 0; 
}


/*
    배열의 대안
    
    vector 템플릿 클래스
    vector 템플릿 클래스는 프로그램이 실행되는 동안 vector 객체의 크기를 세팅할수 있고, 새로운 데이터를 마지막에 추가하거나 중간에 데이터를 삽입할수도 있다.
    * vector 클래스를 사용하기 위해서는 vector 헤더 파일을 포함해야한다
    * vector 식별자는 std 이름 공간의 일부분이기 때문에 using 명령, using 선언 또는 std::vector 를 사용할 수 있다. 
    * 템플릿은 저장된 데이터 형태를 지시하기 위해서 다른 구문을 사용한다
    * vector 클래스는 원소의 개수를 지칭하기 위해서 다른 구문을 사용한다. 
    
    #include<vector>
    ...
    using namespace std;
    vector<int> vi;
    int n;
    cin >> n;
    vector<double> vd(n);

    vi 는 vector <int> 형의 객체라고 얘기하고, vd는 <double>vector 형의 객체라고 말한다.
    벡터 객체는 값을 삽입하거나 더할때 자동으로 크기를 조정하기 때문에 vi가 0의 크기에서부터 시작하는것은 아무런 문제가 되지 않는다. 
    그러나 크기를 재조정할때에는 일반적으로 이렇게 한다
    vector<typeName> vt(n_elem);

    array 템플릿 클래스
    고정된 메모리에 고정된 크기의 배열을 사용하고 싶으면 array 템플릿 클래스를 사용하자
    array 객체를 생성하기 위해서 사용자는 array 헤더 파일을 포함시켜야 한다
    #include<array>
    ...
    using namespace std;
    array<int, 5> ai; 
    array<double, 4> ad = {1.2, 2.1, 3.43, 4.3};
    일반적으로 다음의 구문은 array 객체 arr 를  생성한다
    array<typeName, n_elem> arr;
    여기서 n_elem 자리에는 변수가 들어갈수 없다. 


*/

/*
    ** OUTPUT
a1[2]: 3.6 at 0x5ffe30
a2[2]: 0.142857 at 0x6a2ff0
a3[2]: 1.62 at 0x5ffdf0
a4[2]: 1.62 at 0x5ffdd0


a1[-2]: 20.2 at 0x5ffe10
a3[2]: 1.62 at 0x5ffdf0
a4[2]: 1.62 at 0x5ffdd0
*/
