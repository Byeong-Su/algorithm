#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    vector<int> v;
    for(int i=0; i<ingredient.size(); i++){
        v.push_back(ingredient[i]);
        if(v.size()>=4 && v[v.size()-4]==1 && v[v.size()-3]==2 && v[v.size()-2]==3 && v[v.size()-1]==1){
            for(int j=0; j<4; j++){
                v.pop_back();
            }
            answer++;
        }
    }
    return answer;
}