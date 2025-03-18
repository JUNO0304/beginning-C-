01. 버전2는 첫번째 표현식에서 빈칸이 나오면 자동적으로 두번째 구문을 수행하지 않는다
그러나 버전 1은 빈칸도 확인학 개행문자도 확인하기 때문에 버전2에 비해 시간이 더 걸리고 비 효율적이다.

02. ch의 주소에 +1 을 해서 출력한다

03. ct1 은3을 출력할것이고 ct2는 아무것도 출력하지 못한다. 값이 0일것이다.

04. 
  a) weight >= 115 && weight < 125; 
  b) ch == q || ch == Q;;
  c) x % 2 == 0 && x != 26;
  d) x%2 == 0 && x %26 !=0;
  e) (donation >= 1000 && donation <= 2000) || gueste == 1;
  f) (ch >= 'a' && ch <= 'z') &&(ch >= 'A' && ch <= 'Z');

05. !!x 는 두번의 부정이기에 x와 같은말이다

06. 

07.   switch(ch)
      {
        case 1 : a_grade++;
                break;
        case 2 : b_grade++;
                break;
        case 3 : c_grade++;
                break;
        case 4 : d_grade++;
                break;
        default : f_grade++;
                break; 
      }

08. 

09
int main()
{
  int line = 0;
  char ch;
  cin.get(ch);
  while(ch != 'Q')
    {
  
      cin.get(ch);
      line++; 
    }
  return 0; 
}
