//9940. 순열1
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AXHx23oq0REDFAXR&categoryId=AXHx23oq0REDFAXR&categoryType=CODE&problemTitle=&orderBy=INQUERY_COUNT&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=13
#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	bool isExist[100001];

	int T,n,num;
	cin >> T;
	for (int t = 1; t <= T; t++) {
		cin >> n;
		//bool *isExist = new bool[n+1];
		for (int i = 1; i <= n; i++) {
			isExist[i] = false;
		}
		for(int i=1; i<=n; i++){
			cin >> num;
			isExist[num] = true;
		}
		bool isTrue = true;
		for (int i = 1; i <= n; i++) {
			if (!isExist[i]) { isTrue = false; break; }
		}
		
		cout << '#' << t << ' ';
		if (isTrue) { cout << "Yes"; }
		else { cout << "No"; }
		cout << '\n';
	}
}