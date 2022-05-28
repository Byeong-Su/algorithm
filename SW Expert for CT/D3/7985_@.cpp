//7985. Rooted Binary Tree 재구성
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AWu1JmN6Js4DFASy&categoryId=AWu1JmN6Js4DFASy&categoryType=CODE&problemTitle=&orderBy=INQUERY_COUNT&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=9
#include<iostream>
#include<cmath>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case)
	{
		int k;
		cin >> k;
		int node = pow(2, k) - 1;

		//입력//
		int* num = new int[node];
		for (int i = 0; i < node; i++)
			cin >> num[i];
		////////

		for (int i = 0; i < k; i++) {
			for (int j = 0; j < pow(2, i); j++) {
				int a = (node - 1) / pow(2, i + 1) + (j * pow(2, k - i));

				if (i == 0)
					cout << "#" << test_case << " ";
				cout << num[a] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}