#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer=0;
    sort(score.begin(), score.end(), greater<>());
    
    int idx=m-1;
    while(idx<score.size()){
        answer+=(score[idx]*m);
        idx+=m;
    }   

    return answer;
}