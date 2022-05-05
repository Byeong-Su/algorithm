//큰 놈, 작은 놈, 같은 놈
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=1&contestProbId=AV5QQ6qqA40DFAUq&categoryId=AV5QQ6qqA40DFAUq&categoryType=CODE&problemTitle=&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=1&pageSize=10&pageIndex=1
#include <iostream>

using namespace std;

int main() {
    int T;          //테스트 케이스
    int num1, num2; //비교할 두 수
    cin >> T;
    for(int t=0; t<T; t++){
        //입력
        cin >> num1 >> num2;

        //비교해 크다, 같다, 작다 출력
        cout << '#' << t+1 << ' ';
        if(num1>num2){ cout << '>'; }
        else if(num1<num2){ cout << '<'; }
        else{ cout << '='; }

        cout << '\n';
    }

    return 0;
}