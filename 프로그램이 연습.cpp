01.
  #include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char ch;
    cin.get(ch);
    while(ch != '@')
    {
        if(islower(ch))
            cout << (char)toupper(ch);
        else if(isupper(ch))
            cout << (char)tolower(ch);
        else if(isspace(ch))
            cout << ch;
        else if(ispunct(ch))
            cout << ch;

        cin.get(ch);
    }
    return 0;
}

02.
  #include <iostream>
using namespace std;
const int ArSize = 10;
int main()
{
    double donation[ArSize];
    int i = 0;
    double average = 0.0;
    int count = 0;
    cout << "donation #1 :";
    while(i < ArSize && cin >> donation[i])
    {
        average += donation[i]; 
        if(++i < ArSize)
            cout <<"donation #" << i + 1 << ": ";
    }

    cout << "평균 기부금은: " << average/i << " 입니다. \n";
    for(int n = 0; n < i; n++)
    {
        if(donation[n] > (average/i))
            count++;
    }
    cout << "평균 기부금보다 큰 금액은 총 " << count << " 개 있습니다. \n";

    return 0; 
}

03.
  #include <iostream>
using namespace std;
void showmenu();
int main()
{
    char choice;
    showmenu();
    cin >> choice;
    while(choice != 'q')
    {
        switch(choice)
        {
            case 'C':   
            case 'c':   cout << "카메라는 검은색 입니다.    (끝내려면 q)";
                        break;
            case 'P':   
            case 'p':   cout << "피아니스트는 사람입니다.    (끝내려면 q)";
                        break;
            case 'T':   
            case 't':   cout << "단풍나무는 잎이 별처럼 생겼습니다.    (끝내려면 q)";
                        break;
            case 'G':   
            case 'g':   cout << "게임은 하면 안됩니다.    (끝내려면 q)";
                        break;
            default :   cout << "c, p, t, g 중에서 하나를 선택하십시오. (끝내려면 q)"; 
        }
        cin >> choice;
    }
    cout << "프로그램을 종료합니다!";

    return 0; 
}

void showmenu()
{
    cout << "다음 선택 사항 중에서 하나를 선택하십시오. (끝내려면 q)\n"
        << "c) camera     p)pianist\n"
        << "t) tree       g)game\n";
}

04.
  #include <iostream>
using namespace std;
const int strsize = 20;
void showmenu();
struct bop {
    char fullname[strsize]; //실명
    char title[strsize];    //직함
    char bopname[strsize];  //BOP 아이디
    int preference;         // 0 = fullname, 1 = title, 2 = bopname;
};

int main()
{

    bop nameLists[5] =
    {
        {"Wimp Macho", "Wimp Macho", "wimpy03", 0},
        {"Raki Rhodes", "Junior Programmer", "rocky03", 1},
        {"Celia Laiter", "MIPS", "celly03", 1},
        {"Hoppy Hipman", "Analyst Trainee", "hoppy03", 1},
        {"Pat Hand", "CEO", "LOOPY", 2}
    };
    
    showmenu();
    char choice;
    int n = 1;

    while(cin.get(choice) && n == 1)
    {
        switch(choice)
        {
            case 'A':   
            case 'a':   for(int i = 0; i < 5; i++)
                        {
                            cout << nameLists[i].fullname << "\n";
                        }
                        cout << "원하는 것을 선택하십시오: ";
                        break;

            case 'B':
            case 'b':   for(int i =0; i < 5; i++)
                        {
                            cout << nameLists[i].title << "\n";
                        }
                        cout << "원하는 것을 선택하십시오: ";
                        break;

            case 'C':
            case 'c':   for(int i = 0; i < 5; i++)
                        {
                            cout << nameLists[i].bopname << "\n";
                        }
                        cout << "원하는 것을 선택하십시오: ";
                        break;
            
            case 'D':
            case 'd':   for(int i = 0; i < 5; i ++)
                        {
                            if(nameLists[i].preference == 0)
                                cout << nameLists[i].fullname << "\n";
                            else if(nameLists[i].preference == 1)
                                cout <<nameLists[i].title << "\n";
                            else
                                cout << nameLists[i].bopname << "\n";
                        }
                        cout << "원하는 것을 선택하십시오: ";
                        break;

            case 'Q':
            case 'q':   n = 0;
                        break;
            
            default :   cout << "다시 선택하십시오 \n";              
        }
        cin.get();
    }
    cout << "프로그램이 종료되었습니다.";
  
    return 0; 
}

void showmenu()
{
    cout << "Benevolent Order of Programmers \n"
        << "a. 실명으로 열람          b. 직함으로 열람 \n"
        << "c. BOP 아이디로 열람      d. 회원이 지정한 것으로 열람 \n"
        << "q. 종료 \n"
        << "원하는 것을 선택하십시오: ";
}

05. 
  #include <iostream>
using namespace std;
/*
    5000 트바프까지는: 0%
    그 다음 10000 트바프까지는: 10%
    또 그 다음 20000 트바프까지는: 15%
    35000 트바프 이상에 대해서는: 20%
*/


int main()
{
    long int tvarp; 
    cout << "소득을 트바프 단위로 적어주세요: ";
    while(cin >> tvarp && tvarp >= 0)
    {
        if(tvarp <= 5000)
            cout << "당신의 소득세는: " << tvarp*0.00 << "트바프입니다.\n";
        else if(tvarp >= 5000 && tvarp <= 10000)
            cout << "당신의 소득세는: " << (5000 * 0.00) + ((tvarp-5000) * 0.10) << "트바프입니다.\n";
        else if (tvarp >= 10000 && tvarp <= 20000)
            cout << "당신의 소득세는: " << (5000 * 0.00) + (10000 * 0.10) + ((tvarp -15000) * 0.15) << "트바프입니다. \n";
        else if (tvarp >=35000)
            cout << "당신의 소득세는: " << (5000 * 0.00) + (10000 * 0.10) + (20000 * 0.15) + ((tvarp - 35000) * 0.20)<< "트바프입니다. \n";
        else
            break;
        cout<< "소득을 트바프 단위로 적어주세요: ";
    }
    cout << "프로그램을 종료합니다.\n";
    return 0; 
}

  06.
    #include <iostream>
using namespace std;
const int ArSize = 20;

struct donation{
    char name[ArSize];
    double amount; 

};

int main()
{
    cout << "기부할 사람이 몇명인가요: ";
    int donator;
    cin >> donator;
    donation *lists = new donation[donator];
    cout <<donator << " 명의 기부자들의 정보를 입력받겠습니다\n" ;
    cin.get();
    
    for(int i = 0; i < donator; i++)
    {
        cout << "기부자의 이름을 입력해주세요: ";
        cin.getline(lists[i].name, ArSize);
        cout << lists[i].name <<"님의 기부금을 입력해주세요: ";
        cin >> lists[i].amount;
        cin.get();
    }

    int sum = 0;
    cout << "<고액기부자 명단>\n";
    for(int i = 0; i < donator; i++)    // 고액기부자 출력
    {
        if(lists[i].amount >= 10000)
        {
            cout << lists[i].name << ": " << lists[i].amount << endl;
            sum++;
        }
    }
    if(sum == 0)
        cout << "기부자가 없습니다. \n";

    sum = 0; 
    cout << "<소액기부자 명단>\n";
    for(int i = 0; i < donator; i++)
    {
        if(lists[i].amount < 10000)
            cout << lists[i].name << ": " << lists[i].amount << endl;
    }
    if(sum == 0)
    cout << "기부자가 없습니다. \n";

    delete [] lists;
    return 0; 
}

07.
#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main()
{
    cout << "단어들을 입력하시오 (끝내려면 q): ";

    string word;
    int vowel = 0;
    int con = 0;
    int etc = 0;
    cin >> word;
    while(word != "q")
    {
        if (isalpha(word[0])) 
        {
			if (word[0] == 'a' || word[0] == 'e' || word[0] == 'i' || word[0] == 'o' || word[0] == 'u' || 
                word[0] == 'A' || word[0] == 'E' || word[0] == 'I' || word[0] == 'O' || word[0] == 'U')
				++vowel;
            else
				++con;
		} 
        else
			++etc;

		cin >> word;
    }

    cout << "모음으로 시작하는 단어 수: " <<  vowel << endl;
    cout << "자음으로 시작하는 단어 수: " << con << endl;
    cout << "기타: " << etc << endl;
    return 0; 
}

08.
  #include <iostream>
#include <fstream>
using namespace std;
const int SIZE = 60; 
int main()
{
    char filename[SIZE];
    ifstream inFile;
    cout << "데이터 파일의 이름을 입력하십시오: ";
    cin.getline(filename, SIZE);
    inFile.open(filename);

    if(!inFile.is_open())
    {
        cout << filename << " 파일을 열수 없습니다.\n";
        cout << "프로그램을 종료합니다.";
        exit(EXIT_FAILURE);
    }
    
    char ch;
    int sum = 0;
    inFile.get(ch);
    while(inFile.good())
    {
        ++sum;
        cout << ch; 
        inFile.get(ch);
    }
    cout << "문자들의 평균 수: " << sum;  
    

    return 0; 
}

09.
  #include <iostream>
#include <fstream>
using namespace std;
const int ArSize = 20;

struct donation{
    char name[ArSize];
    double amount; 

};

int main()
{
    ifstream inFile;
    char filename[ArSize];
    cout << "데이터 파일을 입력하세요: ";
    cin.getline(filename, ArSize);
    inFile.open(filename);

    int donator;
    inFile >> donator;
    donation *lists = new donation[donator];
    inFile.get();


    for(int i = 0; i < donator; i++)
    {
        inFile.getline(lists[i].name, ArSize);
        cout << lists[i].name << endl;
        inFile >> lists[i].amount;
        cout << lists[i].amount << endl;
        inFile.get();
    }

    int sum = 0;
    cout << "<고액기부자 명단>\n";
    for(int i = 0; i < donator; i++)    // 고액기부자 출력
    {
        if(lists[i].amount >= 10000)
        {
            cout << lists[i].name << ": " << lists[i].amount << endl;
            sum++;
        }
    }
    if(sum == 0)
        cout << "기부자가 없습니다. \n";

    sum = 0; 
    cout << "<소액기부자 명단>\n";
    for(int i = 0; i < donator; i++)
    {
        if(lists[i].amount < 10000)
        {
            cout << lists[i].name << ": " << lists[i].amount << endl;
            sum++;
        }
    }
    if(sum == 0)
    cout << "기부자가 없습니다. \n";
    

    delete [] lists;
    return 0; 
}
  
