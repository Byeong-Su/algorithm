#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

//최소힙 구현 위해(작업 소요시간 기준 오름차순 정렬)
struct cmp{
    bool operator()(vector<int> a, vector<int> b){
        return a[1] > b[1];
    }
};

int solution(vector<vector<int>> jobs) {
    //총 경과시간, 인덱스, 현재시간
    int answer = 0, idx = 0, cur_time = 0;
    //최소힙(greater로 오름차순 정렬)
    priority_queue<vector<int>, vector<vector<int>>, cmp> q;
    //요청시간기준 오름차순 정렬
    sort(jobs.begin(), jobs.end());
    //모든 작업 처리하고, 최소힙이 빌때까지 반복
    while(idx<jobs.size() || !q.empty()){
        //작업이 남아있고, 작업 요청시간이 현재시간 이하인 경우
        if(jobs.size()>idx && cur_time>=jobs[idx][0]){
            //최소힙에 삽입
            q.push(jobs[idx]);
            //인덱스 증가
            idx++;
            //같은 시간에 다른작업이 있을 수 있으므로 재확인
            continue;
        }
        //최소힙에 작업이 있는 경우
        if(!q.empty()){
            //현재시간 최신화
            cur_time += q.top()[1];
            //요청시간~현재 작업의 종료시간을 총 경과시간에 더함
            answer += cur_time-q.top()[0];
            //작업 처리
            q.pop();
        }
        //최소힙 비어있으면 대기중인 다음작업의 요청시간으로
        else{ cur_time = jobs[idx][0]; }        
    }
    return answer/jobs.size();
}