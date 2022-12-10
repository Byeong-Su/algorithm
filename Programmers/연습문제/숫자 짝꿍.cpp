#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    //문자열 X와 Y의 0~9의 개수 저장하기 위한 배열
    int X_number[10]={0};
    int Y_number[10]={0};
    //문자열 X와 Y의 0~9의 개수 저장
    for(int i=0; i<X.size(); i++){
        X_number[X[i]-'0']++;
    }
    for(int i=0; i<Y.size(); i++){
        Y_number[Y[i]-'0']++;
    }
    //X와 Y의 각 숫자별 개수 중 최소값 만큼 answer문자열에 숫자 추가(최소값이 0이면 추가안함)
    for(int i=0; i<=9; i++){
        int min_cnt=min(X_number[i], Y_number[i]);
        while(min_cnt>0){
            answer+=to_string(i);
            min_cnt--;
        }
    }
    //answer에 아무것도 추가되지 않은경우
    if(answer==""){ return "-1"; }
    //answer값이 “000”등 0으로만 이루어진 경우
    else if(answer[answer.size()-1]=='0'){ return "0"; }
    //정상적으로 입력된 경우 내림차순 정렬
    else{ sort(answer.begin(), answer.end(), greater<>()); }
    
    return answer;
}
