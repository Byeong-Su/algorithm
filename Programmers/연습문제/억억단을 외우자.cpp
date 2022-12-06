#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

//second 기준 내림차순 정렬(+second 같은것은 first기준 오름차순 정렬)
bool cmp(pair<int, int> &A, pair<int, int> &B)
{
    if (A.second > B.second)
        return 1;
    else if (A.second == B.second)
        return A.first < B.first;
    else
        return 0;
}

vector<int> solution(int e, vector<int> starts){

    vector<int> answer;
	//숫자, 숫자의 약수의 개수
    vector<pair<int,int>> dp;
    
	//dp벡터에 숫자와 0제외 숫자의 약수의 개수를 1로 초기화
    dp.push_back(make_pair(0,0));
    for(int i=1; i<=e; i++){
        dp.push_back(make_pair(i,1));
    }
	//n의 배수는 n을 약수로 가진다는 것을 이용해 약수의 개수 저장
    for(int i=2; i<=e; i++){
        for(int j=1; j<=e/i; j++){
            dp[i*j].second++;
        }
    }
    
	//second 기준 내림차순 정렬(+second가 같다면 first기준 오름차순 정렬)
	sort(dp.begin(), dp.end(), cmp);
    
    for(int i=0; i<starts.size(); i++){
        for(int j=0; j<dp.size(); j++){
			//숫자가 시작범위인 starts[i]~ 끝 범위인 e 까지의 숫자이면 처음 해당되는 범위의 숫자를 정답벡터에 추가(위에서 정렬했으므로)
            if (starts[i]<=dp[j].first && dp[j].first <= e) {
                answer.push_back(dp[j].first);
                break;
            }
        }
    }
	
    return answer;
}
