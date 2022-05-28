//6057. 그래프의 삼각형
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AWbHcWd6AFcDFAV0&categoryId=AWbHcWd6AFcDFAV0&categoryType=CODE&problemTitle=&orderBy=INQUERY_COUNT&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=10
#include <iostream>

using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
		
	int T,n,m,x,y,ans;
	cin >> T;
	for (int t = 1; t <= T; t++){
		cin >> n >> m;
		bool arr[51][51] = { false };
		for (int i = 0; i < m; i++) {
			cin >> x >> y;
			arr[x][y] = true;
			arr[y][x] = true;
		}

		//완전 탐색으로 세 정점이 연결되어있는지 확인
		ans = 0;
		for (int i = 1; i <= n; i++){
			for (int j = 1; j <= n; j++) {
				for (int k = 1; k <= n; k++){
					if (arr[i][j] && arr[j][k] && arr[k][i]) {
						ans++;
					}
				}
			}
		}

		//반복 제거를 위해 나누기6
		cout << "#" << t << " " << ans/6 << '\n';
	}
	return 0;
}