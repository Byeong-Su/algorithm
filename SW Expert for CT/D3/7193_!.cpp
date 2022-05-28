//승현이의 수학공부
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AWksRkI6AR0DFAVE&categoryId=AWksRkI6AR0DFAVE&categoryType=CODE&problemTitle=7193&orderBy=PASS_RATE&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=1
//(A + B) % M = ((A % M) + (B % M)) % M 임을 활용(페르마의 소정리 기법)
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T;
    cin >> T;
    
    for(int t = 1; t <= T; t++)
    {
        int N,ans = 0;
        string x;
        
        cin >> N >> x;
        
        for(int i = 0; i < x.size(); i++)
            //x[i]-'0'쓰면  ((X%100)/10)이짓 안해도 됨
            //10진수로 안바꾸고 진수인 값 그대로 두고 (N-1)나눠도 성립
            ans += (x[i] - '0') % (N - 1);
        
        cout << '#' << t << ' ' << ans%(N-1) << '\n';
    }
    return 0;
}