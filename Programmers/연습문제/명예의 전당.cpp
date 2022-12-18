#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> honor;
    for(int i=0; i<score.size(); i++){
        honor.push_back(score[i]);
        sort(honor.begin(), honor.end(), greater<>());
        if(honor.size()<k){ answer.push_back(honor[i]); }
        else { answer. push_back(honor[k-1]); }
    }
    return answer;
}