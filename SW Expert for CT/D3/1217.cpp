//[S/W 문제해결 기본] 4일차 - 거듭 제곱
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AV14dUIaAAUCFAYD&categoryId=AV14dUIaAAUCFAYD&categoryType=CODE&problemTitle=&orderBy=PASS_RATE&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=1
#include <iostream>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, N, M, res;

    for(int t=1; t<=10; t++){
        cin >> T >> N >> M;
        res=1;
        for(int i=0; i<M; i++){
            res*=N;
        }

        //출력
        cout << '#' << t << ' ' << res << '\n';
    }

    return 0;
}