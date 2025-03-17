    01. 사용자에게 두 개의 정수를 입력하라고 요구하는 프로그램을 작성하라. 프로그램은 입력한 두 정수를 포함하여 그 사이에 있는 모든 정수들의 합을 계산하고 출력해야 한다.
    사용자는 둘 중에 작은 정수를 먼저 입력한다고 가정한다. 예를 들어, 사용자가 2 와 9를 입력하면 프로그램은 2 부터 9 까지의 모든 정수들의 합이 44라고 출력해야 한다. 
int main()
{
    int x, y, sum;
    cout << "type in a small number: "; 
    cin >> x;
    cout << "type in a bigger mnumber: ";
    cin >> y; 

    for(int i = x; i <=y;i++)
    {
        sum += i;
    }
    cout << sum << endl;

    return 0; 
}

    02. Listing 5.4프로그램을 array 객체와 long double 형을 사용하여 수정하라.
    100! 의 값은 무엇인가
const int ArSize = 101; 

int main()
{
    long double factorials[ArSize];
    factorials[1] = factorials[0] = 1LL;
    for(int i = 2; i < ArSize; i++)
        factorials[i] = i* factorials[i-1];
    for(int i = 0; i < ArSize; i++)
        cout << i << "! = " << factorials[i] << endl;

    return 0; 
}

    03. 사용자에게 수를 입력하라고 요구하는 프로그램을 작성하라. 수를 입력할 때마다 프로그램은 그때까지 입력된 수들의 누계를 출력해야 한다.
    사용자가 0을 입력하면 프로그램은 종료된다
int main()
{
    int sum;
    for(int i = 1; i != 0;)
    {
        cout << "type in any number: ";
        cin >> i;
        sum += i; 
        cout << "현재까지 누계: " << sum << endl;
    }
    cout << "당신이 지금까지 입력한 수들의 누계는: "<< sum;
    return 0; 
}

    04. 고객 A는 단리 10%로 100,000원을 투자하였다. 따라서, 고객 A는 매년 원금의 10%인 10,000원을 이자 수익으로 얻는다
    이자 수익 = 0.10 * 원금

    같은 기간 동안에 고객B는 복리 5%로 100,000원을 투자하였다. 따라서 고객B가 매년 얻는 이자 수익은 전년도 원리금의 5%이다.
    이자 수익 = 0.05 * 전년도 원리금

    고객 B는 1년 후 100,000 원의 5%인 5,000원을 이자 수익으로 얻게 되므로 원리금에 105,000원이 된다. 2년 후에는 전년도 원리금 105,000원의 5%인 5,250원을 이자 수익으로 얻게된다.
    고객 B의 투자 가치가 고객 A의 투자 가치를 초과하는 년 수를 계산하고, 그때 두 사람의 투자 가치를 함께 출력하는 프로그램을 작성하라.
int main()
{
    long long a = 100000; 
    long long b = 100000;
    int year = 0; 
    do
    {
        year++; 
        a = a + 0.10* 100000; 
        b = b + 0.05 *b;
    } while (b < a);

    cout << "고객 B 는 " << year << "년후 고객 A 의 투자 가치를 초과한다.\n";
    cout << "고객 A의 투자가치는: " << a << "\n";
    cout << "고객 B의 투자가치는: " << b << "\n";
    return 0; 
}


    05. C++ for Fools 라는 책을 팔고 있다. 1년 간의 월간 판매량을 (금액이 아니라 권수로) 입력 받는 프로그램을 작성하라. char *형의 배열을 사용하여 (또는 원한다면
    string 객체의 배열을 사용하여) 월 이름을 초기화한다. 루프를 사용하여 월 이름을 나타내는 프롬프트를 표시하고, 입력받은 월간 판매량을 int 형의 배열에 저장한다. 
    배열 내용의 합계를 계산하고, 그 해의 연간 총 판매량을 출력한다. 
const int ArSize = 12; 
int main()
{
    int monthly[ArSize];
    const char* month_name[ArSize] = {"Jan", "Feb", "Mar", "Apr", "May", "June", "July", "Aug", "Sep", "Oct", "Nov", "Dec" };
    int sum; 
    for(int i = 0; i < ArSize; i++)
    {
        cout << i + 1 <<"월 판매량을 입력해주세요";
        cin >>monthly[i];
        sum += monthly[i];
    }

    for(int i = 0; i < ArSize; i++)
    {
        cout << month_name[i] << "판매 권수는: " << monthly[i] << "입니다. \n";
    }
    cout << "연간 총 판매량은: " << sum; 

    return 0; 

    06. 연습 5를 수정하여 3년동안에 걸친 월간 판매량을 입력받아 2차원 배열에 저장하는 프로그램을 작성하라. 
    각 해당 연도의 연간 판매량을 출력하고, 2년째와 3년째 까지의 누적 판매량을 출력한다. 
const int ArSize = 12;
const int Year = 3; 
int main()
{
    int monthly[Year] [ArSize];
    const char* month_name[ArSize] = {"Jan", "Feb", "Mar", "Apr", "May", "June", "July", "Aug", "Sep", "Oct", "Nov", "Dec" };
    int sum;
    for(int y = 0; y < 3; y++)
    {
        int year_sum = 0;  
        for(int i = 0; i < ArSize; i++)
        {
            cout << i + 1 <<"월 판매량을 입력해주세요: ";
            cin >>monthly[y][i];
            sum += monthly[y][i];
            year_sum += monthly[y][i];
        }
        cout << y + 1 << "년차 총 판매량은: " << year_sum << " 권 입니다. \n";
    }
    cout << "연간 총 판매량은: " << sum << "권입니다"; 

    return 0; 
}
    07. 제작업체를 나타내는 문자열을 문자 배열에 보관하고, 제작년도를 정수로 보관하는 car 라는 구조체를 설계하라. 이 프로그램은 몇 대의 차를 목록으로 관리할것인지 사용자에게 묻는다.
    사용자가 관리를 원하는 자동차 대수만큼 new 를 사용하여 car 구조체의 동적 배열을 만든다. 각 구조체에 저장할 제작업체와 제작년도에 관한 정보를 입력하도록 사용자에게 프롬프트를
    제시한다. 이 프로그램의 수치 데이터와 문자열을 번갈아 읽어들여야 하기 때문에 약간의 주의가 필요하다. 끝으로, 각 구조체의 내용을 출력해야 한다.  
struct car 
{
    int year;
    string brand; 
};
int main()
{
    cout << "몇 대의 차를 목록으로 관리하시겠습니까? ";
    int many;
    cin >> many;
    car* pt = new car [many];
    for(int i = 0; i < many; i++)
    {
        cout << "자동차 #" << i + 1 << ": \n";
        cout << "제작업체: ";
        cin >> pt[i].brand;
        cin.get();
        cout << "제작년도: ";
        cin >> pt[i].year; 
    }
    cout << "현재 귀하가 보유하고 있는 자동차 목록은 다음과 같습니다. \n";
    for(int i =0; i < many; i++)
    {
        cout << pt[i].year << "년형 " << pt[i].brand << endl;
    }

    delete [] pt; 
    return 0; 
}
    08. char 형의 배열을 사용하고, done 이라는 단어가 입력될 때까지 한번에 한 단어 씩 읽는 루프를 사용하는 프로그램을 작성하라. 
    이 프로그램은 입력된 단어 수 (done 은 제외) 를 보고해야 한다. 실행 예는 다음과 같다. 
    cstring 헤더 파일을 포함시켜야 한다. strcmp() 함수를 사용하여 비교 테스트를 수행해야 한다.


    10. 프로그램은 출력할 행 수를 요구하고, 중첩 루프를 사용한다. 첫번쨰 행에 별표 1개, 두 번째 행에 별표 2개, 이런 식으로 지정한 행 수만큼 출력한다. 
    각 행에 출력되는 별표 앞에는 모든 행이 같은 수의 문자를 출력하도록 마침표로 채운다. 프로그램의 실행 예는 다음과 같아야 한다.
    출력할 행 수를 입력하십시오: 5
    ....*
    ...**
    ..***
    .****
    *****
