//백준 3985
#include <iostream>

using namespace std;

int main()
{
    
    int L,N,P,K,cnt;        //배열길이, 인원수, 왼쪽입력값, 오른쪽 입력값, 임시길이;
    int E_long=0, E_idx, R_long=0, R_idx;     //최대 기대치,최대기 기대치 인덱스, 최대 실제치, 최대실제치 인덱스
    bool arr[1001]={false};

    cin >> L >> N;
    
    for(int i=1; i<=N; i++){
        cin >> P >> K;
        
        //최대기대치 찾기
        if(K-P+1>E_long){ E_long=K-P+1; E_idx=i; }
        
        //최대실제치 찾기
        cnt=1;
        for(int j=P; j<=K; j++){
            //이미 앞에서 선점한것은 true 되어있음
            while(!arr[j]){
                cnt++;
                arr[j]=true;
            }
        }
        if(cnt>R_long){ R_long=cnt; R_idx=i; }
    }
    
    cout << E_idx << " " << R_idx;

    return 0;
}
