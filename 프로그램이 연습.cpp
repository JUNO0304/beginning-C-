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
