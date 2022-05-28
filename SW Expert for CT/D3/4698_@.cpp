//4698. 테네스의 특별한 소수
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AWRuoqCKkE0DFAXt&categoryId=AWRuoqCKkE0DFAXt&categoryType=CODE&problemTitle=&orderBy=INQUERY_COUNT&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=10
//int primeNum[1000001]; 하면 범위에러 나므로(배열 가능범위 초과인듯)
//bool primeNum[1000001]; 해서 소수 인지 아닌지 여부만 저장해둬야함
//여기서는 시간초과 방지를위해 미리 소수를 저장해두고 테스트케이스 풀어봄(소수 범위 넓기때문)
#include <iostream>
#include <string>

using namespace std;

bool prime[1000001] = { false, };

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int T;
	cin >> T;

	prime[0] = true;
	prime[1] = true;

	for (int i = 2; i <= 1000000; i++){
		if (!prime[i]){
			for (int j = i + i; j <= 1000000; j += i)
				prime[j] = true;
		}
	}

	for (int t = 1; t <= T; t++){
		int D, A, B, ans = 0;
		string d;
		cin >> D >> A >> B;

		d = to_string(D);
		for (int i = A; i <= B; i++){
			if (!prime[i]){
				string p;
				p = to_string(i);

				if (p.find(d) != string::npos) { ans++; }
			}
		}
		cout << "#" << t << " " << ans << endl;
	}
	return 0;
}