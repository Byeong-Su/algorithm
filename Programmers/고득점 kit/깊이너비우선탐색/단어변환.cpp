#include <string>
#include <vector>
#include <queue>

using namespace std;

//두 문자열이 한 알파벳만 빼고 같은지 비교
bool str_compare(string str1, string str2){
    int differ=0;
    for(int i=0; i<str1.size(); i++){
        //다른 알파벳인 경우 differ++
        if(str1[i] != str2[i]){ differ++; }
        //두개 이상의 알파벳 다른 경우 false 처리
        if(differ>1){ return false; }
    }
    return true;
}

int bfs(string begin, string target, bool visited[], vector<string> &words){
    int depth;
    
    queue<pair<string,int>> q;
    //탐색 깊이를 저장해주기 위해 pair사용
    q.push(make_pair(begin,0));
    
    //경로를 타고 목표인 target 문자열로 변환 되었거나(정답 탐색됨) 더이상 탐색할 것이 없으면 while탈출
    while((begin.compare(target)!=0) && !q.empty()){
        begin=q.front().first;
        depth=q.front().second;
        q.pop();
        for(int i=0; i<words.size(); i++){
            //words 전체를 탐색해도 현재 begin인 문자는 이미 방문이 true라 탐색안됨
            if(str_compare(begin, words[i]) && visited[i]==false){
                visited[i]=true;
                q.push(make_pair(words[i], depth+1));
            }
        }        
    }
    return depth;
}

int solution(string begin, string target, vector<string> words) {
    int answer = 0;
    
    //예외 처리(해가 없는 경우로 모든 그래프 탐색후 실패로 가지 않게 하기 위함)
    bool exist = false;    
    for(int i=0; i<words.size(); i++){
        if(target.compare(words[i])==0){ exist=true; }
    }
    if(!exist){ return answer; }
    
    //bfs 탐색
    bool visited[51] = {false};    
    answer=bfs(begin, target, visited, words);
    return answer;
}