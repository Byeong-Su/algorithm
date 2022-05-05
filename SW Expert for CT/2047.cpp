//신문 헤드라인
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=1&contestProbId=AV5QKsLaAy0DFAUq&categoryId=AV5QKsLaAy0DFAUq&categoryType=CODE&problemTitle=&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=1&pageSize=10&pageIndex=1
#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char** argv)
{
    string s;
    //입력
    cin >> s;
    for(int i=0; i<s.size(); i++){
        //소문자를 대문자로 변환(반대는 tolower)
        s[i] = toupper(s[i]);
    }
    //출력
    cout << s;
	
	return 0;
}



//풀이 2
/*
#include <iostream>
 
using namespace std;
 
int main(void) {
    string s;
    cin >> s;
 
    //소문자 -> 대문자 변환
    for(int i=0; i<s.length(); i++) {
        if('a' <= s.at(i) & s.at(i) <= 'z')
            s[i] = s[i] - 32;
    }
    
    cout << s;
 
    return 0;
}*/