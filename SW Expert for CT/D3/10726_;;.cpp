//10726. 이진수 표현
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AXRSXf_a9qsDFAXS&categoryId=AXRSXf_a9qsDFAXS&categoryType=CODE&problemTitle=&orderBy=INQUERY_COUNT&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=9
//처음 idx값의 자리수를 하나 작게해줘서 모든 테스트케이스 안맞았음
#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int T;
	cin >> T;
	for (int t = 1; t <= T; t++) {
		int n, m;
		cin >> n >> m;

		vector<int> v;
		int idx = 1073741824;
		while (1) {
			if (idx == 0) { break; }

			if (m >= idx) { m -= idx; v.push_back(1); }
			else { v.push_back(0); }
			idx = (idx >> 1);
		}

		/*for (int i = 0; i < v.size(); i++) {
			cout << v[i] << ' ';
		} cout << endl;*/

		cout << '#' << t;
		bool isON = true;
		for(int i=v.size()-1; i>=v.size()-n; i--){
			if (v[i] != 1) { isON = false; break; }
		}
		if (isON) { cout << " ON"; }
		else { cout << " OFF"; }
		cout << '\n';
	}
	//67108864
	//1073741824
	
	return 0;
}