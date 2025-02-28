#include <iostream>
using namespace std;

/*
    위도를 도각, 분각, 초각 단위로 요청하여, 10진수 형식으로 출력하는 프로글매을 작성하라.
    1분각은 60초 각이다. 
    1도각은 60분각이다.
    이들을 기호 상수로 표현하라.
    각각의 입력 값을 위해 별개의 변수를 사용해야 한다.
*/

int main()
{
    const int MIN = 60;
    const int NUMB = 3600; 
    double hour, min, sec; 
    
    cout << "위도를 도, 분, 초 단위로 입력하시오: " << endl;
    cout << "먼저, 도각을 입력하시오: " << endl;
    cin >> hour; 
    cout << "다음에, 분각을 입력하시오: " << endl;
    cin >> min;
    cout << "끝으로, 초각을 입력하시오: " << endl;
    cin >> sec;

    double latitude = hour + (min/MIN + sec/NUMB);

    cout << hour << "도, " << min << "분, " << sec << "초 = " << latitude << "도." << endl; 



    return 0;
}
