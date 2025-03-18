#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
const int SIZE = 60;
int main()
{
    char filename[SIZE];
    ifstream inFile;
    cout << "데이터 파일의 이름을 입력하시오: ";
    cin.getline(filename, SIZE);
    inFile.open(filename);
    if(!inFile.is_open())
    {
        cout << filename << " 파일을 열 수 없습니다. " << endl;
        cout << "프로그램을 종료합니다. \n";
        exit(EXIT_FAILURE);
    }
    double value;
    double sum = 0.0;
    int count = 0;
    
    inFile >> value;
    while(inFile.good())
    {
        ++count;
        sum += value;
        inFile >> value;
    }

    if(inFile.eof())
        cout << "파일 끝에 도달했습니다. \n";
    else if (inFile.fail())
        cout << "데이터 불일치로 입력이 종료되었습니다. \n";
    else
        cout << "알 수 없는 이유로 입력이 종료되었습니다. \n";
    if (count ==0)
        cout << "데이터가 없습니다. \n";
    else
    {
        cout << "읽은 항목의 개수: " << count << endl;
        cout << "합계: " << sum << endl;
        cout << "평균: " << sum /count << endl;
    }

    inFile.close(); 
    return 0; 
}


/*
    텍스트 파일 읽기
    - fstream 헤더 파일을 포함시켜야 한다
    - fstream 헤더 파일은 입력을 처리하는 ifstream 클래스를 정의한다
    - 하나 이상의 ifstream 변수 또는 객체를 선언할 필요가 있다. 일반적인 이름짓기 관례를 준수하는 한, 사용자는 원하는 이름을 지정할 수 있다
    - std 이름 공간을 지정해야 한다. 예를 들면, ifstream 과 같은 요소들을 사용하기 위해 using 지시자 또는 std:: 접두사를 사용할수 있다
    - 특정 ifstream 객체와 특정 파일을 연결시킬 필요가 있다. 그렇게 하는 한 가지 방법은, open() 메서드를 사용하는것이다
    - 파일을 다루는 작업이 끝나면, close() 메서드를 사용하여 그 파일을 닫아야 한다.
    - ifstream 객체를 >> 연산자와 함께 사용하여 다양한 유형의 데이터를 읽을 수 있다
    - ifstream 객체를 get() 메서드와 함께 사용하여, 개별적인 문자들을 읽을 수 있다. ifstream 객체를 getline() 메서드와 함께 사용하여, 한 번에 한 행의 문자들을 읽을 수 있다
    - ifstream 객체를 eof() 과 fail()과 같은 메서드와 함께 사용하여, 입력 시도가 성공했는지 감시할수 있다
    - ifstream 객체 자체가 검사 조건으로 사용되었을 때, 마지막 읽기 시도가 성공이면 bool 값 true 로 변환되고, 그렇지 않으면 false 로 변환된다.

    ifstream 객체를 선언하는 방법
    ifstreasm inFile;       // inFile 은 ifstream 객체
    ifstream fin;           // fin 은  ifstream 객체

    객체를 특정 파일에 연결하는 방법
    inFile.open("bowling.txt");
    char filename[50];
    cin >> filename;        // 사용자가 이름을 지정한다.
    fin.open(filname);      // 지정된 파일을 읽는데 fin 사용

    예시
    double wt;
    inFile >> wt;           // bowling.txt. 에서 하나의 수를 읽는다
    char line[81];
    fin.getline(line, 81);  // 한 행의 텍스트를 읽는다

    입력을 위해 존재하지 않는 파일을 열려고 시도하면 무슨 일이 일어나는가?
    에러가 일어난다. 이를 방지하기 위해서 is_open() 메서드를 사용해서 확인할수 있다. 
    파일이 성공적으로 열리면 참을 리턴한다
    exit()함수는 프로그램을 종료한다. 매개변수 값으로 EXIT_FAILURE를 정의한다
    위 함수들은 <cstdlib> 헤더 파일에 포함되어 있다
    inFile.open("bowling.txt");
    if(!inFile.is_open())
    {
        exit(EXIT_FAILURE);
    }
    

*/

/*
    OUTPUT
데이터 파일의 이름을 입력하시오: scores.txt
파일 끝에 도달했습니다. 
읽은 항목의 개수: 11
합계: 187
평균: 17
*/
