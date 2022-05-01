#include <iostream>

using namespace std;

int main()
{
    int n,k,sex,grade,room=0;       //학생수, 방 최대인원수, 성별, 학년, 방의 수
    cin >> n >> k;
    
    int girl[7]={0}, boy[7]={0};
    
    //입력
    for(int i=0; i<n; i++){
        cin >> sex >> grade;
        if(sex==0){ girl[grade]++; }
        else{ boy[grade]++; }
    }
    //학생이 있으면 몫과 나머지로 방수 구함
    for(int i=1; i<=6; i++){
        if(girl[i] > 0){
            room+=(girl[i]/k);
            if(girl[i]%k > 0){ room++; }
        }
        if(boy[i] > 0){
            room+=(boy[i]/k);
            if(boy[i]%k > 0){ room++; }
        }
    }
    
    cout << room;
    
    return 0;
}