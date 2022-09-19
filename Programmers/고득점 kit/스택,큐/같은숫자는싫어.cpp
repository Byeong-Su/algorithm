#include <vector>
#include <iostream>
#include <stack>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;

    stack<int> s;

    //segmentation fault 방지 위해 최초 입력값 미리 삽입
    s.push(arr[0]);
    answer.push_back(arr[0]);

    //최초 입력값 이미 삽입되어 있으므로 그 다음인 인덱스1부터 반복문으로 탐색
    for(int i=1; i<arr.size(); i++){
        //stack의 top에 저장되어있는 이전 입력값과 다르면 결과배열에 추가
        if(s.top() != arr[i]){
            answer.push_back(arr[i]);
            s.push(arr[i]);
        }
    }

    return answer;
}