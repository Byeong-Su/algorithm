//최대수 구하기
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=1&contestProbId=AV5QQhbqA4QDFAUq&categoryId=AV5QQhbqA4QDFAUq&categoryType=CODE&problemTitle=&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=1&pageSize=10&pageIndex=1#include <iostream>
#include <iostream>

using namespace std;

int main() {
    int T;          //테스트 케이스
    int num, max; //입력 수, 최대 값
    cin >> T;
    for(int t=0; t<T; t++){
        max=0;
        for(int i=0; i<10; i++){
            //입력
            cin >> num;
            //비교(3항연산자 이용)
            max=(num>max) ? num : max;
        }
        //출력
        cout << '#' << t+1 << ' ' << max << '\n';
    }
    return 0;
}