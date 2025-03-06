01. 다음과 같은 데이터 객체를 선언하라
  a. 30 개의 char 형 원소를 가진 배열 actors
char actors[30]; 
  b. 100개의 short형 원소를 가진 배열 betsie
short betsie[100];
  c. 13개의 float형 원소를 가진 배열 chuck
float chuck[13];
  d. 64개의 long double형 원소를 가진 배열 dipsea
long double dipsea[64];

02. 내재된(built-in) 배열 대신 array 템플릿을 이용하여 문제 1의 데이터 객체를 선언하라
#include<array>
array<char, 30> actors;
array<short, 100> betsie;
array<float, 13> chuck;
array<long double, 64> dipsea;

03. 5개의 int 형 원소를 가진 배열을 선언하고, 이 배열을 1 부터 시작하는 처음 다섯개의 홀수로 초기화하라.
int count[5] = {1, 3, 5, 7, 9};

04. 문제 2에 나오는 배열의 첫번째 원소와 마지막 원소를 더하여 even 이라는 새로운 변수에 대입하는 문을 작성하라.
char even[2];
even[0] = actors[0];
even[1] = actors[29]; 

05. float 형의 배열 ideas 의 두번째 원소에 들어있는 값을 출력하는 구문을 작성하라.
    const int SIZE = 5; 
    float idea[SIZE] = {0.4, 2.2, 5.3, 2.3, 1.2};

    cout << idea [1];

06. Char형의 배열을 선언하고, "cheeseburger" 라는 문자열로 초기화하라.
    const int SIZE = 20; 
    char burger[SIZE];
    cout << "type in the burger: ";
    cin.getline(burger, SIZE);
    cout << burger << endl; 

07. string 객체를 선언하고, "Waldorf Salad" 라는 문자열로 초기화하라.
    string str = {"Waldorf Salad"};
    cout << str << endl;

08. 물고기를 나타내는 구조체 선언을 설계하라. 그런데 이 구조체는 물고기의 종류(kind), 정수로 된 온스 단위의 무게(weight), 소수부가 있는 인치 단위의 길이(length) 로 정의해야 한다. 
struct fish
{
    char kind[20];
    int weight;
    double length; 
};

09. 문제 6에서 정의한 구조체형으로 변수를 하나 선언하고 초기화하라. 

struct fish
{
    char kind[20];
    int weight;
    double length; 
};

int main()
{
    fish goldFish = 
    {
        "goldfish",
        3,
        5.5
    };

    cout << goldFish.kind << endl <<goldFish.weight << endl << goldFish.length  << endl;



    return 0; 
}

10. enum 을 사용하여 Yes, No, Maybe 를 값으로 가지는 Response 라는 데이터형을 정의하라. Yes 는 1, No는 0, Maybe 는 2 가 되어야한다.
    enum response { No = 0,Yes = 1, Maybe = 2};
    cout << Yes <<endl << No << endl << Maybe << endl;

11. ted를 double형 변수라고 가정하자. ted를 지시하는 포인터를 선언하고, 그 포인터를 사용하여 ted 의 값을 출력하라.
    double ted = 3.4;
    cout << ted << endl;
    double *dpt = &ted; 
    *dpt = 5.4; 
    cout << ted << endl; 
    cout << *dpt << endl;

12.treacle 을 10 개의 float형 원소를 가진 배열이라고 가정하자. treacle 의 첫번째 원소를 지시하는 포인터를 선언하고, 그 포인터를 사용하여 배열의 첫번째 원소와 마지막 원소를 출력하라.

    float treacle[10] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.1};
    float *fpt = treacle;
    cout << fpt[0] << endl << fpt[9] <<endl;
    //cout << *pf << " " << *(pf+9) << endl;

13.양의 정수를 하나 입력하라고 사용자에게 요구하고, 입력받은 수만큼의 int 형 원소를 가지는 동적 배열을 생성하는 코드를 new 와 vector 객체를 이용하여 작성하라
    int numb;
    cout << "type in a positive numbe: ";
    cin >> numb;
    int *pt = new int[numb];    
    vector<int> va(numb);
    delete pt;
    return 0; 

14.다음과 같은 코드는 올바른가? 올바르다면 어떤 내용이 출력되는가?
  cout << (int*) "Home of the jolly bytes";
  코드는 올바르며 위와 같은 코드는 "Home of the jolly bytes" 라는 문자열이 저장되어 있는 메모리 공간의 주소를 출력할것이다

15. 문제 8에서 정의한 구조체형으로 동적 구조체를 생성하고, 그 구조체의 kind 멤버의 값을 키보드로부터 받아들이는 코드를 작성하라.
    fish *goldFish = new fish;
    cout << "Type in the kind of fish: ";
    cin.getline(goldFish->kind, 20);
    cout << "Type in the weight of the fish in oz: ";
    cin >> goldFish -> weight;
    cout << "Type in the length of the fish in inches: ";
    cin >> goldFish -> length;
    
    cout << goldFish -> kind << endl
    << goldFish -> weight << endl
    << goldFish -> length << endl;

16. Listing 4.6은 수치 입력 뒤 행 단위의 문자열 입력이 오면 문제가 발생한다는 것을 보여준다. 다음 코드를
    cin.getline(address, 80);
    다음과 같은 코드로 대체하면 프로그램의 실행은 어떻게 될까?
    cin >> address; 
cin >> 은 입력된 문자의 끝을 판별하는데 화이트스페이스를 사용한다. 즉 띄어쓰기 또는 탭 키같은 화이트스페이스를 만드는 키가 사용되면 거기서 입력을 마친다.
cin 으로 코들를 바꾸면 주소안에 띄어쓰기가 포함되어 있을때 그 주소자체를 온전히 address 변수에 옮기지 못한다. 그러므로 에러는 발생하지 않지만, 사용자의 의도가 입력이 제대로 안될 확률이 높다.

17. 10개의 string 객체를 가진 vector 객체와 10개의 string 객체를 가진 array 객체를 선언하라. 필요한 header 파일을 선언해야 하며 using 지시어는 사용할수 없다.
    또한 const 지시어를 이용하여 string 객체의 개수를 정하라

    const int NUMB = 10;
    std::vector<std::string> vs(NUMB);
    std::array<std::string, 10> va; 





