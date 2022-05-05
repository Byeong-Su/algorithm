//몫과 나머지 출력하기
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=1&contestProbId=AV5QGNvKAtEDFAUq&categoryId=AV5QGNvKAtEDFAUq&categoryType=CODE&problemTitle=&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=1&pageSize=10&pageIndex=2
#include <iostream>

using namespace std;

int main(){
    int T,a,b;  //테스트 케이스, 두 수 a,b
    //테스트 수 입력
    cin >> T;
    for(int t=1; t<=T; t++){
        //두 수 입력
        cin >> a >> b;
        //결과 출력
        cout << '#' << t << ' ' << a/b << ' ' << a%b << '\n';
    }

    return 0;
}