//6485. 삼성시의 버스 노선
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AWczm7QaACgDFAWn&categoryId=AWczm7QaACgDFAWn&categoryType=CODE&problemTitle=&orderBy=INQUERY_COUNT&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=3
#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T,N,P,A,B,C;
	cin >> T;
	for (int t = 1; t <= T; t++) {
		cin >> N;
        int ans[5001]={0};

		for (int i = 0; i < N; i++) {
			cin >> A >> B;

            for(int j=A; j<=B; j++){ ans[j]++; }
		}
        
		cin >> P;

        cout << '#' << t;
		for (int i = 0; i < P; i++) {
			cin >> C;
            cout << ' ' << ans[C];
		}
		cout << '\n';
	}

	return 0;
}