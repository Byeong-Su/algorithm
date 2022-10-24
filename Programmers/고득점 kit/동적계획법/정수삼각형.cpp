#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> triangle) {
    
    vector<int> ans_vec;
    
    //인덱스 0은 삼각형 가장 상단의 값, 나머지는 값을 0 으로 dp배열 초기화
    int dp[501][501]={triangle[0][0], 0};
	
    //삼각형 전체 순회
	for(int i=1; i<triangle.size(); i++){
        //줄마다 가장 왼쪽은 바로 윗 하나만 선택 가능
		dp[i][0] = dp[i-1][0]+triangle[i][0];
		for(int j=1; j<triangle[i].size(); j++){
            //두 번째 줄인 경우 첫 번째 줄의 값이 1개만 있으므로 예외처리
			if(i==1){ dp[i][j]=dp[i-1][j-1]+triangle[i][j]; }
            //선택 가능한 두 수중 큰값을 선택해 저장
			else{ dp[i][j]=max(dp[i-1][j-1]+triangle[i][j], dp[i-1][j]+triangle[i][j]); }
			
            //마지막 줄에 도달한 경우 값을 결과 찾기위한 벡터에 삽입
			if(i==triangle.size()-1){ ans_vec.push_back(dp[i][j]); }
			
		}
	}
	
    //마지막줄의 값들을 정렬해 가장 큰 값이 return 되도록 함
	sort(ans_vec.begin(), ans_vec.end());    
    return ans_vec.back();
}