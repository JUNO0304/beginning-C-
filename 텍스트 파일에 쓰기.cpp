#include <iostream>
#include <fstream>
using namespace std;
 
int main()
{
    char automobile[50];
    int year;
    double a_price;
    double d_price; 

    ofstream outFile;               // 출력을 위한 객체 생성
    outFile.open("carinfo.txt");    // 파일에 연결

    cout << "자동차 메이커와 차종을 입력하시오: ";
    cin.getline(automobile, 50);
    cout << "연식을 입력하십시오: ";
    cin >> year;
    cout << "구입 가격을 입력하시오: ";
    cin >> a_price;
    d_price = 0.913 * a_price;

    cout << fixed;  
    cout.precision(2);
    cout.setf(ios_base::showpoint);
    cout << "메이커와 차종: " << automobile << endl;
    cout << "연식: " << year << endl;
    cout << "구입 가격 $" << a_price << endl;
    cout << "현재 가격 $" << d_price << endl;

    outFile << fixed;
    outFile.precision(2);
    outFile.setf(ios_base::showpoint);
    outFile << "메이커와 차종: " << automobile << endl;
    outFile << "연식: " << year << endl;
    outFile << "구입 가격$" << a_price << endl;
    outFile << "현재 가격 $" << d_price << endl;

    outFile.close();        // close 메서드는 이름을 요구하지 않는다.

    return 0; 
}


/*
    간단한 파일 입력/출력
    때로 키보드 입력은 최선의 선택이 아니다.
    에를 들면, 주식을 분석하는 프로그램을 작성하고, 1000종목의 주식 시세가 들어있는 파일을 다운로드 했다고 가정하자
    모든 값을 수작업으로 입력하는 것보다 프로그램이 그 파일을 직접 읽게 만드는 것이 훨씬 편리하다.
    마찬가지로 분석한 결과를 영구적인 기록으로 남길수 있도록 출력을 파일에 기록하게 하는 것이 편리하다

    텍스트 I/O와 텍스트 파일
    입력을 위해 cin 을 사용할 때, 프로그램은 그  입력을 연속된 바이트들로 인식한다.
    이때 각각의 바이트는 하나의 문자 코드로 해석된다. 그 입력은 문자 데이터, 즉 텍스트 데이터로 시작한다. 
    그러고 나서 cin 객체가 텍스트를 다른 데이터형으로 변환 하는 책임을 맡는다.
    샘플 입력 행이 다음과 같다고 가정하자
    38.5 19.2
    char ch;
    cin >> ch;
    입력 행에 있는 첫 문자가 ch에 대입된다. 이 경우에, 첫 문자는 숫자 3 이고, 이 숫자에 해당하는 문자 코드가 (바이너리로) ch 에 대입된다.
    입력과 목적지가 둘 다 문자다. 
    int n;
    cin >> n;

    이 경우에 cin 은 숫자가 아닌 첫 문자가 나올때 까지 읽는다.
    즉 숫자 3 과 숫자 8 을 읽고, 다음에 읽을 문자로 소수점을 입력 큐에 남겨 둔다. 
    cin 은 이 두 문자가 수치 값 38 에 해당한다고 계산하고, 38에 해당하는 바이너리 코드를 n에 대입한다.

    파일 출력을 하기 위해서는
    - fstream 헤더 파일을 포함시켜야 한다
    - fstream 헤더 파일은 출력을 처리하는 ofstream 클래스를 정의한다
    - 하나 이상의 ofstream 변수 또는 객체를 선언할 필요가 있다. 일반적인 이름짓기 관례를 준수하는 한, 사용자는 원하는 이름을 지정할 수 있다. 
    - std 이름 공간을 지정해야 한다. 예를 들면 ofstream 과 같은 요소들에 대해 using 지시자 또는 std:: 접두사를 사용할수 있다
    - 특정 ofstream 객체와 특정 파일을 연결시킬 필요가 있다. 그렇게 하는 한 가지 방법은, open() 메서드를 사용하는 것이다.
    - 파일을 다루는 작업이 끝나면, close() 메서드를 사용하여 그 파일을 닫아야 한다
    - ofstream 객체를 << 연산자와 함께 사용하여 다양한 유형의 데이터를 출력할 수있다

    객체를 선언하는 방식은 다음과 같다
    ofstream outFile;   // outFile 은 ofstream 객체
    ofStream fout;      // fout 은 ofstream 객체
    
    객체를 특정 파일에 연결하는 방법은 다음과 같다
    outFile.open("fish.txt");   // fish.txt. 에 쓰는데 outFile 을 사용
    char filename[50];
    cin >> filename;    //사용자가 이름을 지정한다
    fout.open(filename);    // 지정된 파일을 읽는데 fout 사용

    이 객체들을 사용하는 방법은 다음과 같다
    double wt = 125.8;
    outFIle << wt;
    char line[81] = "Objects are closer than they appear.";
    fin << line << endl


*/

/*
    OUTPUT
자동차 메이커와 차종을 입력하시오: Flitz Perky 
연식을 입력하십시오: 2009
구입 가격을 입력하시오: 13500
메이커와 차종: Flitz Perky
연식: 2009
구입 가격 $13500.00
현재 가격 $12325.50
*/
