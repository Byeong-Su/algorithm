//24시간
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AXsEBlLqedsDFARX&categoryId=AXsEBlLqedsDFARX&categoryType=CODE&problemTitle=&orderBy=PASS_RATE&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=1
#include <iostream>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, A, B;      //테스트케이스 수
    cin >> T;
    for(int t=1; t<=T; t++){
        cin >> A >> B;

        //출력
        cout << '#' << t << ' ' << (A+B)%24 << '\n';
    }

    return 0;
}