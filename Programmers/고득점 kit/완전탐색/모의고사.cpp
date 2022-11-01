#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> result;
    
    int max=0, cnt1=0, cnt2=0, cnt3=0;
    
    int arr1[5] = {1,2,3,4,5};
    int arr2[8] = {2,1,2,3,2,4,2,5};
    int arr3[10] = {3,3,1,1,2,2,4,4,5,5};
    
    for(int i=0; i<answers.size(); i++){
        //정답배열과 찍은배열 인덱스 맞춰주기 위해
        int pos1=i%5, pos2=i%8, pos3=i%10;
        
        if(answers[i]==arr1[pos1]){ cnt1++; }
        if(answers[i]==arr2[pos2]){ cnt2++; }
        if(answers[i]==arr3[pos3]){ cnt3++; }
        
        if(max<=cnt1){ max=cnt1; }
        if(max<=cnt2){ max=cnt2; }
        if(max<=cnt3){ max=cnt3; }
    }
    
    answer.push_back(cnt1);
    answer.push_back(cnt2);
    answer.push_back(cnt3);
    
    //최대값인 인덱스만 삽입
    for(int i=0; i<3; i++){
        if(answer[i]==max){
            result.push_back(i+1);
        }
    }
    
    //최대값인 인덱스를 오름차순 정렬해 가장 높은 점수 받은사람 여러사람인 경우 처리
    sort(result.begin(), result.end());
    
    return result;
}