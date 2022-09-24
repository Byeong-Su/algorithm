#include <vector>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0, i = 0, sum = 0;
    
    queue<int> q;    
    
    while(1){
        //마지막이 진입하였으면 그 트럭이 다 지나갈때까지의 시간 계산해야 하므로 bridge_length만큼 더해줌
        if(i == truck_weights.size()){
            answer+=bridge_length;
            break;  
        }
        
        //경과시간 증가
        answer++;
        
        //차량 탈출한 경우 다리 무게합에서 빼고 다리 큐에서 차량 무게 삭제
        if(q.size() == bridge_length){
            sum-=q.front();
            q.pop();  
        }
        
        //차량 진입 가능한 경우 다리 무게합에 더하고 다리 큐에 차량 무게 삽입
        if(sum+truck_weights[i] <= weight){
            sum+=truck_weights[i];
            q.push(truck_weights[i]);  
            i++;
        }
        //차량 진입 불가한 경우 0 추가해 경과시간만 +1 되도록함
        else{   
            q.push(0);
        }
    }
    
    return answer;
}