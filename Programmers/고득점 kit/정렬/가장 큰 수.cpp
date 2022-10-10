#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

void dfs(int cnt, vector<string> v, bool visited[], vector<int> numbers, vector<int> &res){
    if(cnt==numbers.size()){
        string s;
        for(int i=0; i<cnt; i++){
            s+=v[i];
        }
        res.push_back(stoi(s));
        return;
    }
    for(int i=0; i<numbers.size(); i++){
        if(!visited[i]){
            visited[i]=true;
            v.push_back(to_string(numbers[i]));
            dfs(cnt+1, v, visited, numbers, res);
            v.pop_back();
            visited[i]=false;
        }
    }
}

string solution(vector<int> numbers) {
    string answer = "";
    
    vector<string> v;
    vector<int> res;
    bool visited[1001]={false};
    
    dfs(0, v, visited, numbers, res);
    
    sort(res.begin(), res.end(), greater<>());
    
    answer = to_string(res[0]);
    
    return answer;
}