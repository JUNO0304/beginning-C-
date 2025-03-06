01. 다음과 같은 형식으로 정보를 읽어들여 화면에 다시 출력하는 C++프로그램을 작성하라.
    영문 퍼스트 네임 (이름): Seong il
    영문 라스트 네임 (성): Yoon
    학생이 원하는 학점: B
    나이: 22
    성명: Yoon, Seong il
    학점: C
    나이: 22
  
    char firstName[20];
    char lastName[10];
    char grade;
    int age;

    cout << "영문 퍼스트 네임 (이름): ";
    cin.getline(firstName, 20);
    cout << "영문 라스트 네임 (성): ";
    cin >> lastName; 
    cout << "학생이 원하는 학점: ";
    cin >> grade;
    cout << "나이: ";
    cin >> age;

    grade = grade + 1; 

    cout << "성명: " << lastName << ", " << firstName << endl;
    cout << "학점: " << grade << endl;
    cout << "나이: " << age;

02. char형 배열 대신에 c++ 의 string 클래스를 사용하여 Listing 4.4 를 다시 작성하라.
    string name;
    string dessert; 
    
    cout << "이름을 입력하십시오: \n";
    getline(cin, name);
    cout << "좋아하는 디저트를 입력하십시오: \n";
    getline(cin, dessert);
    cout << "맛있는 " << dessert;
    cout << " 디저트를 준비하겠습니다. " << name << " 님! \n";

    return 0; 

03. 퍼스트 네임(이름) 과 라스트 네임(성)을 사용자에게 입력하도록 요청하고, 라스트 네임, 콤마, 빈칸, 퍼스트 네임으로 이루어지는 제 3 의 문자열을 구성하고, 저장하고, 출력하는 프로그램을 작성하라.
    char형 배열과 cstring 헤더파일이 제공하는 함수들을 사용하라. 실행 예는 다음과 같아야한다.
    퍼스트네임(이름)을 입력하시오: Seong il
    라스트네임(성) 을 입력하시오: Yoon
    하나의 문자열로 만들면: Yoon, Seong il

    char firstName[20];
    char lastName[10];
    cout << "퍼스트 네임(이름) 을 입력하시오: ";
    cin.getline(firstName, 20);
    cout << "라스트 네임(성) 을 입력하시오: ";
    cin >> lastName;
    int combinedSize = strlen(firstName) + strlen(lastName);
    char combined[combinedSize + 3];
    strcpy(combined, lastName);
    strcat(combined, ", ");
    strcat(combined, firstName);

    cout << combined << endl;

    return 0; 

04. 퍼스트 네임(이름) 과 라스트 네임(성) 을 사용자에게 입력하도록 요청하고, 라스트 네임, 콤마, 빈칸, 퍼스트 네임으로 이루어지는 제 3의 문자열을 구성하고, 저장하고, 출력하는 프로그램을 작성하라.
    string 객체와 string 헤더 파일이 제공하는 메서드를 사용하라. 실행 예는 다음과 같아야한다.
    퍼스트네임(이름)을 입력하시오: Seong il
    라스트네임(성) 을 입력하시오: Yoon
    하나의 문자열로 만들면: Yoon, Seong il

    string firstName;
    string lastName;
    cout << "퍼스트 네임(이름) 을 입력하시오: ";
    getline(cin, firstName);
    cout << "라스트 네임(성) 을 입력하시오: ";
    cin >> lastName;
    string combined= lastName + ", " + firstName;
    cout << "하나의 문자열로 만들면: " << combined << endl; 

05. CandyBar 구조체는 세 개의 멤버를 가지고 있다. 첫 번째 멤버는 캔디바의 상표명을 저장한다. 두번째 멤버는 캔디바의 중량 (소수부를 가질수 있다) 을 저장한다. 세번째 멤버는 캔디바에 함유된 칼로리 (정수값)를 저장한다.
    그러한 구조체를 선언하고, snack 이라는 CandyBar형 구조체 변수를 만든다음, 그 멤버들을 각가 "Mocha Munch", 2.3, 350 으로 초기화 하라. 초기화는 snack 을 선언할때 함께 하라. 마지막으로 snack 변수의 내용을 출력한다. 
struct candyBar
{
    string brand;
    double weight;
    int cal;
};

int main()
{
    candyBar snack =
    {
        "Mocha Munch",
        2.3,
        350
    };

    cout << "candyBar brand: " << snack.brand << endl
    << "CandyBar weight: " << snack.weight << endl
    << "CandyBar calorie: " << snack.cal << endl;
    return 0; 
}

06. 연습 5 에서 서술한 대로, CandyBar 구조체는 세 개의 멤버를 가지고 있다. 세 개의 CandyBar 구조체를 원소로 가지는 배열을 만들고,
    그 배열의 구조체 원소들을 원하는 값으로 초기화한 다음, 각 구조체의 내용을 출력하는 프로그램을 작성하라.
candyBar snack[3] =
    {
        {"Mocha Munch", 2.3, 350},
        {"Gummy bear", 1.3, 150},
        {"snack bar", 4.4, 500}
    };

    cout << "Name of the snack: " << snack[0].brand << endl
         << "Weight of the snack: " << snack[0].weight << endl
         << "Calorie of the snack: " << snack[0].cal << endl;

    cout << endl;
    cout << "Name of the snack: " << snack[1].brand << endl
         << "Weight of the snack: " << snack[1].weight << endl
         << "Calorie of the snack: " << snack[1].cal << endl;
    cout << endl;

    cout << "Name of the snack: " << snack[2].brand << endl
         << "Weight of the snack: " << snack[2].weight << endl
         << "Calorie of the snack: " << snack[2].cal << endl;
  
07. TCL 사는 피자 분석 서비스를 대행하고 있다. 정밀 분석을 위한 기초 자료로 각 피자에 대해서 다음과 같은 정보를 기록해야 한다.
      * 피자 회사의 이름 (여러 단어로 된 이름일 수도 있다).
      * 피자의 지름
      * 피자의 중량
    이러한 정보를 저장할수 있는 구조체 템플릿을 설계하고, 그 구조체형의 변수를 사용하는 프로그램을 작성하라.
    위에 열거한 세 가지 정보 항목을 사용자에게 입력할 것을 요구해야 하고, 입력한 정보를 출력해야 한다.
    cin (또는 cin의 메서드) 와 cout 을 사용하라 

struct pizza_analysis
{
    string name;
    double diameter;
    double weight;
};

int main()
{
    pizza_analysis pizza;
    cout << "What is the name of your pizza brand: ";
    getline(cin, pizza.name);
    cout << "what is the diameter of the pizza you have: ";
    cin >> pizza.diameter;
    cout << "What is the weight of the pizza: ";
    cin >> pizza.weight; 

    cout << "Name of the pizza brand is: " << pizza.name << endl;
    cout << "Diameter of the pizza is: " << pizza.diameter << endl; 
    cout << "Weight of the pizza is: " << pizza.weight  << endl; 

    return 0; 
}

08. 연습 7 을 다시 하되, 이번에는 구조체 변수를 선언하는 대신에 new 를 사용하여 구조체를 대입하라. 그리고 프로그램이 피자 회사의 이름보다
    피자의 지름을 먼저 요구하게 하라.
struct pizza_analysis
{
    string name;
    double diameter;
    double weight;
};

int main()
{
    pizza_analysis *pizza = new pizza_analysis;
    cout << "what is the diameter of the pizza you have: ";
    cin >> pizza->diameter;
    cin.get();
    cout << "What is the name of your pizza brand: ";
    getline(cin, pizza ->name);
    cout << "What is the weight of the pizza: ";
    cin >> pizza->weight; 

    cout << "Name of the pizza brand is: " << pizza->name << endl;
    cout << "Diameter of the pizza is: " << pizza->diameter << endl; 
    cout << "Weight of the pizza is: " << pizza->weight  << endl; 

    delete pizza; 

    return 0; 
}

09. 연습 6을 다시 하되, 세 개의 CandyBar 구조체를 원소로 가지는 배열을 선언하는 대신에 new 를 사용하여 그 배열을 동적으로 대입하라. 
struct candyBar
{
    string brand;
    double weight;
    int cal;
};

int main()
{
    candyBar *snack = new candyBar[3];
    snack[0] = {"Mocha Munch", 2.3, 350};
    snack[1] = {"Gummy bear", 1.3, 150};
    snack[2] = {"snack bar", 4.4, 500};

    cout << "Name of the snack: " << snack[0].brand << endl
    << "Weight of the snack: " << snack[0].weight << endl
    << "Calorie of the snack: " << snack[0].cal << endl;

    cout << endl;
    cout << "Name of the snack: " << snack[1].brand << endl
    << "Weight of the snack: " << snack[1].weight << endl
    << "Calorie of the snack: " << snack[1].cal << endl;
    cout << endl;

    cout << "Name of the snack: " << snack[2].brand << endl
    << "Weight of the snack: " << snack[2].weight << endl
    << "Calorie of the snack: " << snack[2].cal << endl;

    delete []snack; 

    return 0; 
}

10. 40야드 (혹은 40미터) 달리기 결과에 대하여 세 번을 입력할 수 있는 프로그램을 작성하고, 그 횟수와 평균을 디스플레이하시오. 
    그 데이터를 저장하기 위해 array 객체를 사용하시오. (array 객체 사용이 어려울 경우엔 내재 배열을 사용하시오.
  
    array<double,3> run;
    cout << "Type in the result of your 40 yard run: ";
    cin >> run[0];
    cout << "Type in the result of your second 40 yard run: ";
    cin >> run[1];
    cout << "Type in the result of your third 40 yard run: ";
    cin >> run[2];
    
    cout << "Here are your 40 yard run result: " << endl;
    cout << "first run: " << run[0] << endl;
    cout << "second run: " << run[1] << endl;
    cout << "third run: " << run[2] << endl;


