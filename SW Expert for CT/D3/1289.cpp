//원재의 메모리 복구하기
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AV19AcoKI9sCFAZN&categoryId=AV19AcoKI9sCFAZN&categoryType=CODE&problemTitle=&orderBy=PASS_RATE&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=1
#include <iostream>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;      //테스트케이스 수
    cin >> T;

    string s;
    int cnt;
    for(int t=1; t<=T; t++){
        cin >> s;

        //맨 뒤부터 탐색
        //i번째와 i+1번째 다르면 변경 1회 한것
        cnt=1;
        for(int i=s.size()-2; i>=0; i--){
            if(s[i]!=s[i+1]){
                cnt++;
            }
        }
        //맨처음 0이면 두번째비트와 다르다 하더라도 첫번째 비트부터는 변경 안한것이므로 -1
        if(s[0]=='0'){ cnt--; }
        //출력
        cout << '#' << t << ' ' << cnt << '\n';
    }

    return 0;
}