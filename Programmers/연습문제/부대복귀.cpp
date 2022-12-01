#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(int n, vector<vector<int>> roads, vector<int> sources, int destination) {
    vector<int> answer;
    
    //전체경로 roads를 2차원 벡터 형태로 만들기
    vector<int> edge[100001];
    for(int i = 0; i < roads.size(); i++){
        edge[roads[i][0]].push_back(roads[i][1]);
        edge[roads[i][1]].push_back(roads[i][0]);
    }
    
    //각 source별 destination까지의 최단경로 탐색
    for(int i=0; i<sources.size(); i++){
        //최단 경로 길이 초기화
        int tmp_ans=-1;
        //방문 여부 0처리(방문 및 현재까지의 경로 저장 위해 bool아닌 int 타입으로 지정)
        int visited[100001] = {0};
        
        //source[i]부터 bfs탐색 시작
        int v=sources[i];
        queue<int> q;
        q.push(v);
        visited[v]=1;
        
        while(!q.empty()){
            v=q.front();
            //목적지인 destination 찾은 경우 tmp_ans를 -1에서 경로길이로 바꾸고 break
            if(v==destination){ tmp_ans=(visited[v]-1); break; }
            q.pop();
            
            //현재 노드에서 갈 수 있는 경로 전체 탐색
            for(int i=0; i<edge[v].size(); i++){
                //방문하지 않은 노드이면
                if(visited[edge[v][i]]==0){
                    //방문처리(현재노드까지의 최단경로 + 1로 다음방문 노드 경로 길이를 저장함)
                    visited[edge[v][i]]=(visited[v]+1);
                    q.push(edge[v][i]);
                }
            }
        }
        //정답벡터에 source[i]의 최단경로 삽입(최단경로 탐색 안된경우는 -1 삽입됨)
        answer.push_back(tmp_ans);
    }
    return answer;
}