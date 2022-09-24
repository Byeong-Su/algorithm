#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    int index=0;
    
    //문자열 벡터 정렬
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());
    
    while(index<participant.size()){
        //completion 벡터 전체 탐색 완료한 경우 나머지 participant는 answer에 추가
        if(index>=completion.size()){
            answer+=participant[index];
            index++;
        }
        //문자열이 일치하지 않으면
        else if(participant[index].compare(completion[index]) != 0){
            answer+=participant[index];
            participant.erase(participant.begin()+index);
        }
        //문자열이 일치한 경우에만 index++
        //일치하지 않은데 ++하면 participant에서 삭제만 되고 해당 index의 completion과 일치하는 원소 못찾고 넘어감
        else{ index++; }
    }
    
    return answer;
}