#include <string>
#include <vector>

using namespace std;

void dfs(int cnt, int target, int sum, int &answer, vector<int> numbers){
    if(cnt==numbers.size()){
        if(target==sum){ answer++; }
        return;
    }    
    //'+'연산
    dfs(cnt+1, target, sum+numbers[cnt], answer, numbers); 
    //'-'연산
    dfs(cnt+1, target, sum-numbers[cnt], answer, numbers);
}

int solution(vector<int> numbers, int target) {
    int answer = 0;
    
    //dfs로 가능한 모든 경우의수 탐색(순열)
    dfs(0, target, 0, answer, numbers);
    
    return answer;
}