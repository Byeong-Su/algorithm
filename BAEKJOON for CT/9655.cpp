//DP를 이용한 풀이
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;          //돌의 개수
    int DP[1000];   //게임과정의 횟수
    
    cin >> n;
    
    DP[0]=0;
    DP[1]=1;
    DP[2]=2;
    
    //돌은 1개나 3개만 가져갈 수 있으므로
    //1개나 3개 가져간 경우의 수중 최소인 경우 구해주면 됨
    for(int i=3; i<=n; i++){
        DP[i]=min(DP[i-1]+1, DP[i-3]+1);
    }
    
    //DP값이 홀수면 상근 승, 짝수면 창용 승
    if(DP[n]%2 == 1){ cout << "SK"; }
    else{ cout << "CY"; }
    
    return 0;
}