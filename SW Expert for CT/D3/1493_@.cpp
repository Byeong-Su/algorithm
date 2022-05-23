//1493. 수의 새로운 연산
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AV2b-QGqADMBBASw&categoryId=AV2b-QGqADMBBASw&categoryType=CODE&problemTitle=1493&orderBy=INQUERY_COUNT&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=1
//배열에 저장 안하고 규칙대로 값 1씩 증가시키면서 찾아도 되긴 하는듯
#include <iostream>

using namespace std;

//세그먼트 폴트 안나도록 배열 크기 조정
int arr[301][301];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T, p, q, x, y, a, b;

    int num=1;
    for(int i=1; i<=300; i++){
        arr[i][1]=num;
        for(int j=2; j<=300; j++){
            //배열의 가로측은 i+j-1씩 계속 증가
            arr[i][j]=arr[i][j-1]+i+j-1;
        }
        //배열 세로측은 1,2,3,4로 증가하므로 num에 i를 더해준다.
        num+=i;
    }
	
	cin >> T;
	for (int t = 1; t <= T; t++) {
		//입력 및 입력 중 최대값 찾기
		cin >> a >> b;
        for(int i=1; i<=300; i++){
            for(int j=1; j<=300; j++){
                if(arr[i][j]==a){ p=i; q=j; }
                if(arr[i][j]==b){ x=i; y=j; }
            }
        }
        p+=x; q+=y;
        cout << '#' << t << ' ' << arr[p][q] << '\n';

	}
	return 0;
}