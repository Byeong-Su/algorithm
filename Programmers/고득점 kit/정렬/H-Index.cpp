#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    int h1, h2; //인용 횟수(h번), h번 이상 인용된 논문 편 수
    
    //내림차순 정렬
    sort(citations.begin(), citations.end(), greater<>());
    //citations 정렬된 배열 탐색
    for(int i=0; i<citations.size(); i++){
        //현재 인덱스인 논문의 인용 횟수를 h1에 저장
        h1=citations[i];
        //내림차순 정렬 했으므로 h번 이상 인용된 논문 편 수는 현재 인덱스+1(인덱스가 0부터 시작하므로)
        h2=i+1;
        //같은 인용횟수의 논문이 있는경우 논문 편 수++
        for(int j=i+1; j<citations.size(); j++){
            if(h1!=citations[j]){ break; }
            h2++; i++;
        }
        //h1과 h2중 작은 값이 현재 인덱스의 H-Index이므로 둘 중 작은 값이 answer값보다 크다면 answer 값 min(h1,h2)로 교체
        if(answer<min(h1,h2)){ answer=min(h1,h2); }
    }
    
    return answer;
}