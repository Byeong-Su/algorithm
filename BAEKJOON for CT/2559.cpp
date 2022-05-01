//dp를 활용한 풀이
//n=10, k=5이면
//0~5 최대값 저장 후
//index 0인 값 날리고 1~5값을 다음으로 넘겨서
//다음은 1~5값 과 index 6인 값만 더하면 되게 해서
//for문 5번 돌아야 할것 2번만 돌게 함
#include <iostream>

using namespace std;

int main()
{
    int n,k,tmp,max;
    
    cin >> n >> k;
    
    int arr[n],dp[n-k+1]={0};
    
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    for(int i=0; i<k; i++){
        dp[0]+=arr[i];
    }
    max=dp[0];
    for(int i=0; i<n-k; i++){
        tmp=dp[i]-arr[i];
        dp[i+1]=tmp+arr[i+k];
        if(max<dp[i+1]){ max=dp[i+1]; }
        tmp=0;
    }
    cout << max;
    
    return 0;
}