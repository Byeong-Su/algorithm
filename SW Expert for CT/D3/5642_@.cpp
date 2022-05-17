//[Professional] 합
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AWXQm2SqdxkDFAUo&categoryId=AWXQm2SqdxkDFAUo&categoryType=CODE&problemTitle=&orderBy=PASS_RATE&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=14
//DP문제
//이전 원소까지의 최대합 vs 이전원소까지 최대합+현재원소 중 최대값을 판단해
//끝까지 이 과정을 반복해 최대합을 찾아줌
//연속합이 현재원소하나만 보다 크면 현재원소를 연속합으로 바꿔줘야함
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
        int max=-10000;
        //입력
        cin >> N;
        int arr[N]={0};
        for(int i=1; i<=N; i++){
            cin >> arr[i];

            if(arr[i-1]+arr[i] > arr[i]){ arr[i]+=arr[i-1]; }
            if(arr[i]>max){ max=arr[i]; }
        }

        //최대합구간 찾기

        //출력
        cout << '#' << t << ' ' << max << '\n';
    }

    return 0;
}