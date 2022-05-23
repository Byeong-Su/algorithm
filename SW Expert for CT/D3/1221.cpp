//[S/W 문제해결 기본] 5일차 - GNS
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AV14jJh6ACYCFAYD&categoryId=AV14jJh6ACYCFAYD&categoryType=CODE&problemTitle=&orderBy=INQUERY_COUNT&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=3
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T, N;
	string str;
	cin >> T;
	for (int t = 1; t <= T; t++) {
		vector<pair<int, string>> v;
		cin >> N;
		for (int i = 0; i < N; i++) {
			cin >> str;
			if (str=="ZRO") { v.push_back(make_pair(0, "ZRO")); }
			else if (str == "ONE") { v.push_back(make_pair(1, "ONE")); }
			else if (str == "TWO") { v.push_back(make_pair(2, "TWO")); }
			else if (str == "THR") { v.push_back(make_pair(3, "THR")); }
			else if (str == "FOR") { v.push_back(make_pair(4, "FOR")); }
			else if (str == "FIV") { v.push_back(make_pair(5, "FIV")); }
			else if (str == "SIX") { v.push_back(make_pair(6, "SIX")); }
			else if (str == "SVN") { v.push_back(make_pair(7, "SVN")); }
			else if (str == "EGT") { v.push_back(make_pair(8, "EGT")); }
			else if (str == "NIN") { v.push_back(make_pair(9, "NIN")); }
		}
		sort(v.begin(), v.end());

		cout << '#' << t;
		for (int i = 0; i < N; i++) {
			cout << ' '<< v[i].second;
		}
		cout << '\n';
	}

	return 0;
}