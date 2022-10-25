#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

//이어붙이는 수 만드는 함수
int concatNum(int N, int idx){
	int num = N;
	for(int i=1; i<=idx; i++){
		num=num*10+N;
	}	
	return num;
}

int solution(int N, int number) {
    //N과 number이 같으면 한 번 사용해서 가능
    if(N==number){ return 1; }

    //중복 제거를 위해 unordered_set 사용
    vector<unordered_set<int>> dp(8);

    //N을 한 번 사용해 만들 수 있는 수는 N하나
    dp[0].insert(N);

    for(int i=1; i<8; i++){
		//dp[i]에 이어붙인값 삽입
		dp[i].insert(concatNum(N,i));
		
		//dp[i]에 사칙연산한 값 삽입
		for(int j=0; j<i; j++){
			for(int k=0; k<i; k++){
				//조합되는 길이가 안맞는 경우(ex. 길이 5인데 2+3아닌 1+2등 되는 경우)
				if(j+k+1 != i){ continue; }
				
				//dp[j]의 전체 세트 중 하나하나씩 탐색
				for(int a : dp[j]){
					//dp[k]의 전체 세트 중 하나하나씩 탐색
					for(int b : dp[k]){
						//더하기 연산
						dp[i].insert(a+b);
						//빼기 연산(음수 제외)
						if(a-b>0){ dp[i].insert(a-b); }
						//곱하기 연산
						dp[i].insert(a*b);
						//나누기 연산(0 제외)
						if(a/b>0){ dp[i].insert(a/b); }
					}
				}
			}
		}
		
		//처음 number에 해당하는 값 찾으면 가장 작은 개수를 사용한 것이므로 return 
		if(dp[i].find(number) != dp[i].end()){ return i+1; }
		
	}
		
	return -1; 
}