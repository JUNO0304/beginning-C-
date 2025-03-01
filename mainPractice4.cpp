#include <iostream>
using namespace std;

/*
    초 수를 정수 값 (long 형 사용) 으로 요청하고, 그에 상당하는 시간을 일, 시, 분, 초로 디스플레이하는 프로그램을 작성하라
    1일의 시간 수, 1 시간의 분 수, 1 분의 초 수를 기호 상수를 사용하여 표현하라.
*/

double modulo (double , double);

int main()
{
    const double HOURS_OF_DAY = 24;
    const double MINS_OF_HOUR = 60; 
    const double SEC_OF_MIN = 60; 

    long seconds; 
    cout << "초 수를 입력하십시오: ";
    cin >> seconds; 
    
    double day_left_over = seconds / SEC_OF_MIN /MINS_OF_HOUR / HOURS_OF_DAY;
    int day = day_left_over;
    
    double hour_left_over = modulo(day_left_over, day);     // 일을 구하고 남은 시간. 
    int hour = hour_left_over * 24;     // 시간 값. 
    hour_left_over = hour_left_over * 24;  //hour_left_over 의 값은 현재 17.740;

    double min_left_over = modulo (hour_left_over, hour);
    int min = min_left_over * 60; 
    min_left_over = min_left_over *60;

    double sec_left_over = modulo(min_left_over, min);
    int sec = sec_left_over *60;

    cout << seconds << "초 = " << day << "일, " << hour << "시간, " << min << "분, " << sec << "초" << endl;   

    return 0;
}


double modulo (double x, double y)
{
    return x - y;
}
