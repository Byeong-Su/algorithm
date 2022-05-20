//진용이네 주차타워
//https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AW9j74FacD0DFAUY
//대기차량 선입선출이므로 큐 활용
#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T,n,m;      //테스트케이스 수
    cin >> T;
    for(int t=1; t<=T; t++){
        cin >> n >> m;
        int R_i[n+1], W_i[m+1],park[n+1]={0}, cost=0, num;
        queue<int> q;
        bool isPark;
        for(int i=1; i<=n; i++){ cin >> R_i[i]; }
        for(int i=1; i<=m; i++){ cin >> W_i[i]; }

        for(int i=0; i<2*m; i++){
            cin >> num;
            //입차
            if(num>0){
                //대기차량 없는경우 입차 처리
                isPark=false;
                for(int j=1; j<=n; j++){
                    if(park[j]==0){
                        park[j]=num;
                        cost+=(R_i[j]*W_i[num]);
                        isPark=true;
                        break;
                    }
                }
                //주차 공간 안남아서 대기차량 생긴경우 대기차량열에 추가
                if(!isPark){q.push(num);}
            }
            //출차
            else{
                for(int j=1; j<=n; j++){
                    if(park[j]==abs(num)){
                        park[j]=0;
                        break;
                    }
                }
                //출차 처리 후 대기차량 있는경우 대기차량 입차처리
                if(!q.empty()){
                    for(int j=1; j<=n; j++){
                        if(park[j]==0){
                            park[j]=q.front();
                            cost+=(R_i[j]*W_i[q.front()]);
                            q.pop();
                            break;
                        }
                    }
                }
            }
        }
        
        //출력
        cout << '#' << t << ' ' << cost << '\n';
    }

    return 0;
}