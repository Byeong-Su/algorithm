//소득불균형
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AXNP4CvauaMDFAXS&categoryId=AXNP4CvauaMDFAXS&categoryType=CODE&problemTitle=&orderBy=PASS_RATE&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=1
#include <iostream>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, N, sum, cnt, avg;      //테스트케이스 수
    cin >> T;
    for(int t=1; t<=T; t++){
        sum=0,cnt=0;
        cin >> N;
        int arr[N];
        for(int i=0; i<N; i++){
            cin >> arr[i];
            sum+=arr[i];
        }
        avg=sum/N;

        //탐색
        for(int i=0; i<N; i++){
            if(arr[i]<=avg){
                cnt++;
            }
        }

        //출력
        cout << '#' << t << ' ' << cnt << '\n';
    }

    return 0;
}