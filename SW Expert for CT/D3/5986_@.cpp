//5986. 새샘이와 세 소수
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AWaJ3q8qV-4DFAUQ&categoryId=AWaJ3q8qV-4DFAUQ&categoryType=CODE&problemTitle=&orderBy=INQUERY_COUNT&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=8
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int cnt,n;
vector<int> v;

void dfs(int current, int count, int start){
    //마지막 소수에 도달했거나, 숫자가 3개이상 모였을때
    if(current>=n || count>=3){
        //합이 n이고 모인수 3개면 cnt개수 증가
        if(current==n && count==3){ cnt++; }
        return;
    }

    //합이 n이하면 dfs
    for(int i=start; i<v.size(); i++){
        if(current+v[i]<=n){
            dfs(current+v[i], count+1, i);
        }
        else{return;}
    }
}
/*위 함수 내 방식대로 쓴것.
void dfs(int sum, int depth, int idx) {
	//마지막 소수에 도달했거나, 숫자가 3개이상 모였을때
	if (sum == n || depth >= 3) {
		//합이 n이고 모인수 3개면 cnt개수 증가
		if (sum == n && depth == 3) { cnt++; }
		return;
	}
	//합이 n이하면 dfs
	for (int i = idx; i < v.size(); i++) {
		if (sum + v[i] <= n) { dfs(sum + v[i], depth+1, idx); }
		return;
	}
}
*/

int main(){
	int T;
	int arr[1000];
	cin >> T;
	for(int t=1; t<=T; t++){
        v.clear();
		cin >> n;
		
		//n이하 소수구하기
		for(int i=2; i<=n; i++){
			arr[i]=i;
		}
		for(int i=2; i<=sqrt(n); i++){
			for(int j=i*i; j<=n; j+=i){
				if(arr[j]==0){continue;}
				arr[j]=0;
			}
		}
		//소수 벡터에 저장
		for(int i=2; i<=n; i++){
			if(arr[i]!=0){ v.push_back(arr[i]); }
		}

        cnt=0;
        dfs(0,0,0);

        cout << '#' << t << ' '<<cnt << '\n';
		
	}
	return 0;
}