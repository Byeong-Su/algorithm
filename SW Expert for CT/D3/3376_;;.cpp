//파도반 수열
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AWD3Y27q3QIDFAUZ&categoryId=AWD3Y27q3QIDFAUZ&categoryType=CODE&problemTitle=&orderBy=PASS_RATE&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=10
//동적계획법 DP[i]=DP[i-2]+DP[i-3]
//memo배열 int 타입으로 안되서 long long타입으로 바꿨더니 됨
//숫자 크기도 생각해주기
#include <iostream>

using namespace std;


long long memo[201]={0,1,1,1,0,};

long long func(int idx){
    if(memo[idx]!=0){ return memo[idx]; }
    memo[idx]=func(idx-2)+func(idx-3);
    return memo[idx];
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T,N;      //테스트케이스 수
    cin >> T;
    for(int t=1; t<=T; t++){
        cin >> N;
        //출력
        cout << '#' << t << ' ' << func(N) << '\n';
    }

    return 0;
}