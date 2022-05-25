//8500. 극장 좌석
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AWz5yIfq74QDFARQ&categoryId=AWz5yIfq74QDFARQ&categoryType=CODE&problemTitle=8500&orderBy=INQUERY_COUNT&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=1
#include <iostream>

using namespace std;

int arr[10001];

int main() {
	int T;
	cin >> T;
	for (int t = 1; t <= T; t++) {
		int N,max=0,sum=0;
		cin >> N;
		for (int i = 0; i < N; i++) {
			cin >> arr[i];
			if (arr[i] > max) { max = arr[i]; }
			sum += arr[i];
		}
		cout << '#' << t << ' ' << sum + max + N << '\n';
	}
}