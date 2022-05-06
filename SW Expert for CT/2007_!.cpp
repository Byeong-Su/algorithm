//패턴 마디의 길이
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=2&contestProbId=AV5P1kNKAl8DFAUq&categoryId=AV5P1kNKAl8DFAUq&categoryType=CODE&problemTitle=&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=2&pageSize=10&pageIndex=1
#include <iostream>

using namespace std;

int main()
{
    int T;  //테스트케이스 수
    cin >> T;
    string str;
    char tmp_char;
    
    for(int t=1; t<=T; t++){
        cin >> str;
        tmp_char=str[0];
        for(int i=1; i<str.length(); i++){
            //시작 스펠링이 같은것 오면 출력
            if(tmp_char==str[i]){
                cout << '#' << t << ' ' << i << '\n';
                break;
            }
        }
    }

    return 0;
}