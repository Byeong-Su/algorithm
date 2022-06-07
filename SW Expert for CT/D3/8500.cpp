//8500. 극장 좌석
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AWz5yIfq74QDFARQ&categoryId=AWz5yIfq74QDFARQ&categoryType=CODE&problemTitle=8500&orderBy=INQUERY_COUNT&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=1
#include <iostream>

using namespace std;

int arr[10001];
#include <iostream>

using namespace std;

int main(void)
{
	int arr[100][100];
	
	for(int i = 1; i <= 10; i++)
	{
		int n, max = 0, row = 0, col = 0, ldia = 0, rdia = 0;
		cin >> n;
		
		for(int j = 0; j < 100; j++)
		{
			row = 0;
			for(int k = 0; k < 100; k++)
			{
				cin >> arr[j][k];
				row += arr[j][k];
				if(j == k)
					ldia += arr[j][k];
				if(k == 99 - j)
					rdia += arr[j][k];
			}
			if(max < row)
				max = row;
		}
		
		for(int j = 0; j < 100; j++)
		{
			col = 0;
			for(int k = 0; k < 100; k++)
				col += arr[k][j];
			if(max < col)
				max = col;
		}
		
		if(max < ldia)
			max = ldia;
		if(max < rdia)
			max = rdia;
		
		cout << "#" << i << " " << max << endl;
	}
	return 0;
}
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