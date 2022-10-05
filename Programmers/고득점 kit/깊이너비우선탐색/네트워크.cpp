#include <string>
#include <vector>
#include <queue>

using namespace std;

//노드 방문여부 초기화
bool node_visited[201] = {false};

void bfs(int v, int n, vector<vector<int>> computers){
    //노드 방문 처리
    node_visited[v] = true;
    queue<int> q;
    //방문한 배열 큐에 삽입
    q.push(v);
    
    //큐에 있는 노드 즉, 연결된 노드 전체 탐색
    while(!q.empty()){
        //방문노드 저장하고 큐에서 pop
        v=q.front();
        q.pop();
        //방문 노드에 연결된 노드 전체 탐색
        for(int i=1; i<n; i++){
            //연결되어있고 방문하지 않았으면
            if(computers[v][i]==1 && node_visited[i]==false){
                //방문함 표시
                node_visited[i]=true;
                //연결된 노드로 갈 수 있게 큐에 삽입(너비 방식으로 계속 탐색되게 함)
                q.push(i);
            }
        }
    }
}

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    
    for(int i=0; i<n; i++){
        //탐색된적 없는 노드면 하나의 네트워크가 새로 시작되는 것
        if(!node_visited[i]){
            //네트워크 개수 +1
            answer++;
            //네트워크 탐색(bfs 이용해 연결된 노드 모두 방문 처리)
            bfs(i, n, computers);
        }
    }
    
    return answer;
}