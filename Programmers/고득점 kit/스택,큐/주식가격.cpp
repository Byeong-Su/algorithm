#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer;    
    int cnt;
    
    for(int i=0; i<prices.size(); i++){
        cnt=0;
        for(int j=i+1; j<prices.size(); j++){
            cnt++;
            //가격이 떨어진 경우 종료시점이므로 break;
            if(prices[i]>prices[j]){ break; }
        }
        answer.push_back(cnt);
    }
    
    return answer;
}