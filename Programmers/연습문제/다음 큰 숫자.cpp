#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(int n) {
    int answer = 0;
    int next=n;
    //1의 개수 카운트용
    int n_cnt=0;
    //10진수->2진수 변환해 1의개수 카운트
    while(n>0){
        if(n%2==1){ n_cnt++; }
        n/=2;
    }
    //다음 큰 수 찾기
    while(1){
        next++;
        //1의 개수 카운트용
        int next_cnt=0;
        //next를 10진수->2진수 변환해 1의개수 카운트
        int next_copy=next;
        while(next_copy>0){
            if(next_copy%2==1){ next_cnt++; }
            next_copy/=2;
        }
        //다음 큰 수 조건에 맞으면 종료
        if(n_cnt==next_cnt){
            answer=next;
            break;
        }
    }
    
    return answer;
}