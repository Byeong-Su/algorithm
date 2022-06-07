//7985. Rooted Binary Tree 재구성
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AWu1JmN6Js4DFASy&categoryId=AWu1JmN6Js4DFASy&categoryType=CODE&problemTitle=&orderBy=INQUERY_COUNT&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=9
#include<iostream>
#include<cmath>

using namespace std;

int main(int argc, char** argv){
	
	int T;
	cin >> T;
	for (int t = 1; t <= T; ++t){
		int k;
		cin >> k;
		int node = pow(2, k) - 1;

		//입력//
		int* num = new int[node];
		for (int i = 0; i < node; i++){
			cin >> num[i];
		}

		cout << "#" << t << " ";
		for (int i = 0; i < k; i++) {
			for (int j = 0; j < pow(2, i); j++) {
				int a = (node - 1) / pow(2, i + 1) + (j * pow(2, k - i));
				cout << num[a] << " ";
			}
			cout << '\n';
		}
	}
	return 0;
}