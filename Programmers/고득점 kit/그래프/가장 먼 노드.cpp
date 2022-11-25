#include <string>
#include <vector>
#include <queue>

using namespace std;

//방문여부 배열
bool visited[20001]={false};
//각 노드별 최단경로의 길이
int min_dis[20001]={0};

//너비우선탐색
void bfs(int v, vector<vector<int>> edge){
    visited[v]=true;
    
    queue<int> q;
    q.push(v);
    
    while(!q.empty()){
        v=q.front();
        q.pop();
        
        //edge전체에서 연결된 경로 찾기(양방향 간선이므로 a->b, b->a둘다 확인)
        for(int i=0; i<edge.size(); i++){
            //현재노드->다음노드 확인
            if(edge[i][0]==v&&visited[edge[i][1]]==false){
                //방문처리
                visited[edge[i][1]]=true;
                //큐에 삽입
                q.push(edge[i][1]);
                //이전까지의 경로 길이에서 +1
                min_dis[edge[i][1]]=min_dis[v]+1;
            }
            //다음노드->현재노드 확인
            else if(edge[i][1]==v&&visited[edge[i][0]]==false){
                //방문처리
                visited[edge[i][0]]=true;
                //큐에 삽입
                q.push(edge[i][0]);  
                //이전까지의 경로 길이에서 +1
                min_dis[edge[i][0]]=min_dis[v]+1;              
            }
        }
    }
}

int solution(int n, vector<vector<int>> edge) {
    int answer = 0, max_dis=0;
    //너비우선 탐색
    bfs(1,edge);
    //최대 경로 길이를 갖는 노드 개수 찾기
    for(int i=1; i<=n; i++){
        //더 큰 경로 길이 나온 경우 max_dis 최신화 하고 반환값을 1로
        if(min_dis[i]>max_dis){
            max_dis=min_dis[i];
            answer=1;
        }
        //현재 가장 큰 경로 길이와 같은 경로 길이 나온 경우 반환값 +1
        else if(min_dis[i]==max_dis){
            answer++;
        }
    }
    return answer;
}