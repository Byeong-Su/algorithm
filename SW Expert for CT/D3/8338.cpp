//계산기
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AWxpQia60FgDFAWL&categoryId=AWxpQia60FgDFAWL&categoryType=CODE&problemTitle=8338&orderBy=PASS_RATE&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=1
#include <iostream>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T,N;      //테스트케이스 수
    cin >> T;
    for(int t=1; t<=T; t++){
        cin >> N;
        int arr[N];
        int res=0;
        for(int i=0; i<N; i++){
            cin >> arr[i];
            if(i==0){ res+=arr[i]; }
            else{
                if( (res*arr[i])>(res+arr[i]) ){ res*=arr[i]; }
                else{ res+=arr[i]; }
            }
        }
        //출력
        cout << '#' << t << ' ' << res << '\n';
    }

    return 0;
}