#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    
    for(int i=0; i<commands.size(); i++){
        //벡터 i~j구간 자르기
        vector<int> tmp;
        for(int j=commands[i][0]-1; j<=commands[i][1]-1; j++){
            tmp.push_back(array[j]);
        }
        //자른 벡터 오름차순 정렬
        sort(tmp.begin(), tmp.end());
        //정렬한 벡터에 k번째 수 answer에 추가
        answer.push_back(tmp[commands[i][2]-1]);
    }
    return answer;
}