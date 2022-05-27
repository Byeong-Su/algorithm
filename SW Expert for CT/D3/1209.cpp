//1209. [S/W 문제해결 기본] 2일차 - Sum
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AV13_BWKACUCFAYh&categoryId=AV13_BWKACUCFAYh&categoryType=CODE&problemTitle=&orderBy=INQUERY_COUNT&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=1
#include <iostream>

using namespace std;

int main(void)
{
	int arr[100][100];

	for (int i = 1; i <= 10; i++)
	{
		//입력값, 최대값, 가로합, 최대합, 가로1(\방향), 가로2(/방향)
		int n, max = 0, row = 0, col = 0, ldia = 0, rdia = 0;
		cin >> n;

		for (int j = 0; j < 100; j++)
		{
			row = 0;
			for (int k = 0; k < 100; k++)
			{
				cin >> arr[j][k];
				row += arr[j][k];
				//같으면 \방향 대각
				if (j == k)
					ldia += arr[j][k];
				//99-j가 같으면 /방향 대각
				if (k == 99 - j)
					rdia += arr[j][k];
			}
			if (max < row)
				max = row;
		}

		for (int j = 0; j < 100; j++)
		{
			col = 0;
			for (int k = 0; k < 100; k++)
				col += arr[k][j];
			if (max < col)
				max = col;
		}

		if (max < ldia)
			max = ldia;
		if (max < rdia)
			max = rdia;

		cout << "#" << i << " " << max << endl;
	}
	return 0;
}