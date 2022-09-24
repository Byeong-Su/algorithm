#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {

    vector<int> answer;
    int i,count;

    //모든 작업이 완료(progresses의 크기가 0)될 때까지 반복
    while(progresses.size()>0){
        count=0;

        //progresses배열 각 원소에 speeds배열 각 원소값만큼 더해줌
        for(i=0; i<progresses.size(); i++){
            progresses[i]+=speeds[i];
        }

        //progresses배열 원소값이 처음부터 연속적으로 몇개가 100 넘는지 확인
        for(i=0; i<progresses.size(); i++){
            if(progresses[i]>=100){
                count++;
            }
            else{ break; }
        }

        //progresses배열에서 원소값 100 넘는 원소 삭제
        for(i=0; i<count; i++){
            progresses.erase(progresses.begin());
            speeds.erase(speeds.begin());            
        }

        //100넘은원소 개수 결과배열에 추가
        if(count!=0){ answer.push_back(count); }

    }
    return answer;
}