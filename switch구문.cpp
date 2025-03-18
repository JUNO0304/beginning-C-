#include <iostream>
using namespace std;
void showmenu();
void report();
void comfort();

int main()
{
    showmenu();
    int choice;
    cin >> choice;
    while (choice != 5)
    {
        switch(choice)
        {
            case 1 :     cout << "\a\n";
                            break;
            case 2 :     report();
                            break;
            case 3 :     cout << "사장님은 오늘 회사에 계셨습니다. \n";
                            break;
            case 4 :     comfort();
                            break;
            deafult:    cout << "그것은 선택할 수 없습니다. \n";
        }
        showmenu(); 
        cin >> choice;
    }
    cout << "프로그램을 종료합니다! \n";
    return 0;
}

void showmenu()
{
    cout << "1, 2, 3, 4, 5번 중에서 하나를 선택하십시오: \n"
    "1) 경고음          2) 보고서\n"
    "3) 알리바이        4) 격려사\n"
    "5) 종료\n";
}

void report()
{
    cout << "이번 분기는 경영 실적이 아주 좋습니다. \n"
        "판매량은 120% 늘어났고, 비용은 35% 줄었습니다. \n";
}

void comfort()
{
    cout << "사원들은 당신을 업계 최고의 CEO 라고 생각하고 있습니다. \n"
        "이사회도 당신을 업계 최고의 CEO 라고 생각하고 있습니다. \n";
}



/*
   switch 구문
   Cheap, Moderate, Expensive, Extravagant, Excessive
   라는 다섯가지 선택 사항 중에서 어느 하나를 선택하게 만드는 메뉴를 만든다고 가정할때
   우리는 switch 구문 을 사용하여 이를 해결할수 있다
   switch (integer-expression)
   {
        case label1 : statement(s)
        case label2 : statement(s)
        ...
        default     : statement(s)
   }
    switch 구문은 다음에 수행할 구문이 어느 행인지 알려 주는 경로 결정기처럼 행동한다.
    switch 구문에 도착하면 integer-expression의 값에 해당하는 레이블이 붙어 있는 행으로 프로그램이 점프한다.
    예를 들어 값이 4 이면 프로그램은 case 4: 라는 레이블이 붙어 있는 구문으로 프로그램이 점프한다. 
    만약에 integer-expression에 대응하는 레이블이 없으면 프로그램은 default 구문으로 점프한다.
    default 를 사용하지 않을경우 switch 구문을 끝내고 다음 구문을 실행한다.
    
    C++에서 우리가 어느 한 레이블로 점프하면 프로그램은 그 뒤에 있는 레이블들도 전부 수행한다
    이를 방지 하기 위해서는 break 라는 구문을 사용해야 한다.
    break 구문을 사용하면 switch 구문 바로 뒤에 오는 구문으로 프로그램을 점프시킨다. 

*/

/*
    OUTPUT
1, 2, 3, 4, 5번 중에서 하나를 선택하십시오: 
1) 경고음          2) 보고서
3) 알리바이        4) 격려사
5) 종료
1

1, 2, 3, 4, 5번 중에서 하나를 선택하십시오:
1) 경고음          2) 보고서
3) 알리바이        4) 격려사
5) 종료
2
이번 분기는 경영 실적이 아주 좋습니다. 
판매량은 120% 늘어났고, 비용은 35% 줄었습니다.
1, 2, 3, 4, 5번 중에서 하나를 선택하십시오:
1) 경고음          2) 보고서
3) 알리바이        4) 격려사
5) 종료
3
사장님은 오늘 회사에 계셨습니다. 
1, 2, 3, 4, 5번 중에서 하나를 선택하십시오:
1) 경고음          2) 보고서
3) 알리바이        4) 격려사
5) 종료
4
사원들은 당신을 업계 최고의 CEO 라고 생각하고 있습니다. 
이사회도 당신을 업계 최고의 CEO 라고 생각하고 있습니다.
1, 2, 3, 4, 5번 중에서 하나를 선택하십시오:
1) 경고음          2) 보고서
3) 알리바이        4) 격려사
5) 종료
5
프로그램을 종료합니다!  

*/
