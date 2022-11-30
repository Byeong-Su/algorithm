#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <iostream>

using namespace std;

bool cmp(pair<int, int>& a, pair<int, int>& b)
{
    return a.second > b.second;
}

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    
    unordered_map<int, int> um;
    
    for(int i=0; i<tangerine.size(); i++){
        auto it = um.find(tangerine[i]);
        if(it != um.end()){
            it->second++;
        }
        else{
            um.insert(make_pair(tangerine[i],1));
        }
    }
    
    vector<pair<int, int>> v(um.begin(), um.end()); // map을 vector로 변경
    sort(v.begin(), v.end(), cmp);

    for (auto elem : v){
        if(k<=0){ break; }
        k-=elem.second;
        answer++;
    }
        
    return answer;
}