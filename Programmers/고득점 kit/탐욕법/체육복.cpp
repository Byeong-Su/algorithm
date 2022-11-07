#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    //체육복을 하나 가지고 있는 학생은 0
    int arr[31] = {0};
    //체육복을 잃어버린 학생 -1
    for(int i=0; i<lost.size(); i++){ arr[lost[i]]--; }
    //여분의 체육복을 가지고 있는 학생 +1
    for(int i=0; i<reserve.size(); i++){ arr[reserve[i]]++;}
    
    //체육복 없는 경우 빌리기
    for(int i=1; i<=n; i++){
        if(arr[i]==-1){
            //앞사람에게 빌리기
            if(i!=0 && arr[i-1]==1){
                arr[i-1]--;
                arr[i]++;
            }
            //뒷사람에게 빌리기
            else if(i!=n && arr[i+1]==1){
                arr[i+1]--;
                arr[i]++;
            }
        }
    }
    
    //체육복을 가지고 있는 학생 카운트
    for(int i=1; i<=n; i++){
        if(arr[i]>-1){ answer++; }
    }
    
    return answer;
}