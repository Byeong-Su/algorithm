#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> answer;
bool visited[10001];
//모든 도시 방문하였는지 확인용
int cnt = 0;

void dfs(string v, vector<vector<string>> tickets){
    //현재 방문 도시 추가
    answer.push_back(v);
    //dfs 탐색
    for(int i=0; i<tickets.size(); i++){
        //갈 수 있고 방문하지 않은 도시 탐색
        if(tickets[i][0]==v && !visited[i]){
            //방문처리
            visited[i] = true;
            //방문한 도시+1
            cnt++;
            //재귀호출
            dfs(tickets[i][1], tickets);

            //모든 도시 방문하지 않았으면 백트레킹(모든 도시 방문했다면 ticket개수와 방문 카운트가 동일함)
            if(cnt != tickets.size()){
                //방문 도시목록에서 삭제
                answer.pop_back();
                //방문한도시 -1
                cnt--;
                //미방문 처리
                visited[i] = false;
            }
        }
    }
}

vector<string> solution(vector<vector<string>> tickets) {
    sort(tickets.begin(), tickets.end());
    dfs("ICN", tickets);
    return answer;
}