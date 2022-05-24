//8016. 홀수 피라미드
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AWvzGUKKPVwDFASy&categoryId=AWvzGUKKPVwDFASy&categoryType=CODE&problemTitle=8016&orderBy=INQUERY_COUNT&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=1
//계차수열의 합
//A(n)=A(1)+f(n-1)  f(n-1)은 등차수열
//등차수열의합( a가 초항, l이 마지막항, n이 항의 개수 / a가 초항, d가 등차, n이 항의 개수)
//S=n(a+l)/2      S=n(2a+(n-1)d)/2
//타입을 long long안하고 int로 해서 몇개만 맞았었음
#include <iostream>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;
	for (int t = 1; t <= T; t++) {
		long long N;
		cin >> N;

		
		long long L = 1 + ((N - 1)*(4 + (N - 2) * 4) / 2);
		long long R = 1 + ((N-1)*(12 + (N - 2) * 4) / 2);

		cout << '#' << t << ' ' << L << ' ' << R << '\n';

	}

	return 0;
}

//등차를 시그마 공식써서 푼것
/*
#include<iostream>
typedef unsigned long long ull;

using namespace std; 

int main() { 
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    int test_case, T;
    ull n, first, last; 
    cin>>T;
    for(int test_case = 1; test_case <= T; ++test_case) { 
        cin >> n;
        first = 2*n*n - 4*n + 3; 
        last = 2*n*n -1; 
        cout << "#"<< test_case << " "<< first << " " << last <<endl; 
    } 
    return 0; 
}
*/