//구구단2
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AXpz3dravpQDFATi&categoryId=AXpz3dravpQDFATi&categoryType=CODE&problemTitle=&orderBy=PASS_RATE&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=3
#include <iostream>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;      //테스트케이스 수
    int a,b,res;    //두 수, 결과
    cin >> T;
    for(int t=1; t<=T; t++){
        res=0;
        cin >> a >> b;
        if(a>9 || b>9){ cout << '#' << t << ' ' << -1 << '\n'; }
        //출력
        else{
            //곱하기(반복문 덧셈으로 구현)
            for(int i=0; i<b; i++){
                res+=a;
            }
            cout << '#' << t << ' ' << res << '\n';
        }
        
    }

    return 0;
}