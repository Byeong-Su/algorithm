#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<string> operations) {
    vector<int> answer(2);
	
	//최대, 최소 큐를 하나로 묶어 판단하기 위한 카운트
	int cnt=0;
	//최대큐
	priority_queue<int, vector<int>, greater<int>> Gpq;
	//최소큐
    priority_queue<int, vector<int>, less<int>> Lpq;
    
    for(int i=0; i<operations.size(); i++){
		
		//cnt==0으로 큐에 아무것도 남아있지 않은 상태
		//최대, 최소 큐 모두 초기화
		if(!cnt){
			while(!Gpq.empty()){ Gpq.pop(); }
			while(!Lpq.empty()){ Lpq.pop(); }
		}
		//삽입
        if(operations[i][0]=='I'){
            string num="";
            for(int j=2; j<operations[i].size(); j++){
                num+=operations[i][j];
            }
            //stoi() str="-1234" to int(-1234)
            Gpq.push(stoi(num));
            Lpq.push(stoi(num));
			 cnt++;
        }
		//삭제
        else{
			//큐에 아무것도 남지 않은 경우 삭제연산 패스		
			if(!cnt){ continue; }
			//최댓값 삭제
           else if(operations[i][2]=='-'){
               Gpq.pop();
			    cnt--;
           }
		    //최솟값 삭제
		    else{
               Lpq.pop();
			    cnt--;
           }
        }
    }
	
	//큐에 요소가 남아있는 경우 최소, 최대값 answer에 삽입
	if(cnt){
		answer.push_back(Gpq.top());
		answer.push_back(Lpq.top());
	}
    
    return answer;
}