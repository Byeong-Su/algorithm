//평균값 구하기
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=1&contestProbId=AV5QRnJqA5cDFAUq&categoryId=AV5QRnJqA5cDFAUq&categoryType=CODE&problemTitle=&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=1&pageSize=10&pageIndex=1
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int T;          //테스트 케이스
    float num,sum;  //입력숫자,합산
    cin >> T;
    for(int t=0; t<T; t++){
        sum=0.0;
        for(int i=0; i<10; i++){
            cin >> num;
            sum+=num;
        }
        //출력(결과는 반올림해서 출력)
        cout << '#' << t+1 << ' ' << round(sum/10) << '\n';
    }

    return 0;
}