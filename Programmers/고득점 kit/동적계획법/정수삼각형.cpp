#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <iostream>

using namespace std;

int main(){
    int answer = 0;
	
	vector<int> ans_vec;
	
	vector<vector<int>> triangle = { {7}, {3,8}, {8,1,0} ,{2, 7, 4, 4}, {4, 5, 2, 6, 5} };
		
	int dp[501][501]={triangle[0][0], 0};
	
	for(int i=1; i<triangle.size(); i++){
		dp[i][0] = dp[i-1][0]+triangle[i][0];
		for(int j=1; j<triangle[i].size(); j++){
			if(i==1){ dp[i][j]=dp[i-1][j-1]+triangle[i][j]; }
			else{ dp[i][j]=max(dp[i-1][j-1]+triangle[i][j], dp[i-1][j]+triangle[i][j]); }
			
			if(i==triangle.size()-1){ ans_vec.push_back(dp[i][j]); }
			
		}
	}
	
	sort(ans_vec.begin(), ans_vec.end());
	
	cout << ans_vec.back();
	
    return answer;
}