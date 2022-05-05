//홀수만 더하기
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=1&contestProbId=AV5QSEhaA5sDFAUq&categoryId=AV5QSEhaA5sDFAUq&categoryType=CODE&problemTitle=&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=1&pageSize=10&pageIndex=1
#include <iostream>

using namespace std;

int main() {
    int T,num,sum;  //테스트 케이스,입력숫자,합산
    cin >> T;
    for(int t=0; t<T; t++){
        sum=0;
        for(int i=0; i<10; i++){
            cin >> num;
            //홀수면 합산
            if(num%2==1){ sum+=num; }
        }
        //출력
        cout << '#' << t+1 << ' ' << sum << '\n';
    }

    return 0;
}