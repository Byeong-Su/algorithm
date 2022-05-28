//3408. 세가지 합 구하기
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AWEbPukqySUDFAWs&categoryId=AWEbPukqySUDFAWs&categoryType=CODE&problemTitle=&orderBy=INQUERY_COUNT&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=10
//등차수열 공식문제
//양수만 있으면 long long보다 unsigned붙인게 더 범위 넓다
#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T;
    unsigned long n;
    unsigned long S1, S2, S3;
    cin >> T;
    for(int t=1; t<=T; t++){
        cin >> n;
        S1=n*(2+(n-1))/2;
        S2=n*(2+(n-1)*2)/2;
        S3=n*(4+(n-1)*2)/2;
        
        cout << '#' << t << ' ' << S1 << ' ' << S2<<' '<<S3 << '\n';
        
    }


    return 0;
}
