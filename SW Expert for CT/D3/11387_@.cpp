//11387. 몬스터 사냥
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AXb6LR76vCcDFARR&categoryId=AXb6LR76vCcDFARR&categoryType=CODE&problemTitle=&orderBy=INQUERY_COUNT&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=11
//시그마 공식 문제
#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;
	for (int t = 1; t <= T; t++) {
		
		long long D, L, N, ans;
		cin >> D >> L >> N;
		
        //반복문으로해서 풀어도 풀림
		ans = D*N + D*L*N*(N-1) / 200;
		

		cout << '#' << t << ' ' << ans << '\n';
	}
}

//반복문 정답
/*
#include<iostream>
 
using namespace std;
 
int main()
{
    int test_case;
    int T;
    cin>>T;
    for(test_case = 1; test_case <= T; ++test_case)
    {
 
        int D, L, N, n;
        int total_damage=0;
        cin >> D >> L >> N;
 
        for (n=0; n<N; n++) {
            total_damage += D + D*n*L/100;
        }
 
        cout << "#" << test_case << " " << total_damage << endl;
 
 
    }
    return 0;
}
*/