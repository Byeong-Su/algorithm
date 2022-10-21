#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i=0; i<scoville.size(); i++){
        pq.push(scoville[i]);
    }
    while(!pq.empty() && pq.top()<K){
		int scov1=pq.top();
		pq.pop();
		int scov2=pq.top();
		pq.pop();
		int mix_scov=scov1+scov2*2;
		pq.push(mix_scov);
		//모든 음식의 스코빌 지수를 K이상으로 만들 수 없는 경우
		//마지막까지 섞어도 K이상이 되지 못함
		if(pq.size()==2 && mix_scov<K){ return -1; }
		answer++;
	}
    
    return answer;
}