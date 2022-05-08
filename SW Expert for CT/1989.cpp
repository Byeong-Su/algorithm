//초심자의 회문 검사
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=2&contestProbId=AV5PyTLqAf4DFAUq&categoryId=AV5PyTLqAf4DFAUq&categoryType=CODE&problemTitle=&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=2&pageSize=10&pageIndex=1
#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;
    string str;
    bool is;
    
    for(int t=1; t<=T; t++){
        cin >> str;
        is=true;
        for(int i=0; i<str.length()/2; i++){
            //맨앞 맨뒤부터 시작해 하나씩 좁혀오며 비교
            if(str[i]!=str[str.length()-1-i]){ is=false; break; }
        }
        if(is){ cout << '#' << t << ' ' << 1 << '\n'; }
        else{ cout << '#' << t << ' ' << 0 << '\n'; }
    }

    return 0;
}