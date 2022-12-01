#include <string>
#include <vector>

using namespace std;

//동전을 최소로 뒤집는 결과를 출력해야하므로 최대 동전뒤집는 횟수+1로 answer값 초기화
int answer = 21;

//재귀호출(시작 직사각형, 목표 직사각형, 현재 탐색중인 행 인덱스, 뒤집은 횟수)
void recursive(vector<vector<int>> beginning, vector<vector<int>> target, int index, int cnt){
    
    //모든 행 다 거친 후 일치여부 판별
    if(index==beginning.size()){
        //시작 직사각형 목표 직사각형 비교
        for(int i=0; i<beginning[0].size(); i++){
            //열의 첫 원소가 다른 경우
            if(beginning[0][i]!=target[0][i]){
                //시작 직사각형 열 뒤집기
                for(int j=0; j<beginning.size(); j++){
                    if(beginning[j][i]==0){ beginning[j][i]=1; }
                    else{ beginning[j][i]=0; }
                }
                //열 뒤집은 횟수+1
                cnt++;
            }
        }
        //시작 직사각형, 목표 직사각형 같은지 비교
        bool isSame=true;
        for(int i=0; i<beginning.size(); i++){
            for(int j=0; j<beginning[0].size(); j++){
                if(beginning[i][j]!=target[i][j]){ isSame=false; break;}
            }
        }
        
        //두 사각형이 같고 현재 저장된 최소 뒤집은 횟수보다 작다면 최신화
        if(isSame && cnt<answer){ answer=cnt; }
        return;
    }
    
    //현재 행 안뒤집고 재귀호출
    recursive(beginning, target, index+1, cnt);
    
    
    //현재 행 뒤집고
    for(int i=0; i<beginning[index].size(); i++){
        if(beginning[index][i]==0){ beginning[index][i]=1; }
        else{ beginning[index][i]=0; }
    }
    //재귀호출
    recursive(beginning, target, index+1, cnt+1);
}

int solution(vector<vector<int>> beginning, vector<vector<int>> target) {
    //재귀호출(시작 직사각형, 목표 직사각형, 현재 탐색중인 행 인덱스, 뒤집은 횟수)
    recursive(beginning, target, 0, 0);
    
    //목표 상태 못만드는 경우
    if(answer==21){ return -1; }
    //목표 상태 만들 수 있는 경우
    else{ return answer; }
}