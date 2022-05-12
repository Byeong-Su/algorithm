//장애물 경주 난이도
//https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWefy5x65PoDFAUh
#include <iostream>

using namespace std;

int main(){
	int T;		//테스트케이스 수
	int up_max, down_max;		//올라가기 맥스, 내려가기 맥스
	int n;		//배열 길이
	
	cin >> T;
	for(int t=1; t<=T; t++){
		cin >> n;
		int arr[n];
		
		up_max=0, down_max=0;
		//높이 입력
		for(int i=0; i<n; i++){
			cin >> arr[i];
		}
		//맥스 값 게산
		for(int i=1; i<n; i++){
			//높이가 낮아지는 경우
			if(arr[i-1]>arr[i]){
				if(arr[i-1]-arr[i]>down_max){
					down_max=arr[i-1]-arr[i];
				}
			}
			//높이가 높아지는 경우
			else if(arr[i-1]<arr[i]){
				if(arr[i]-arr[i-1]>up_max){
					up_max=arr[i]-arr[i-1];
				}
			}
		}
		//출력
		cout << '#' << t << ' ' << up_max << ' ' << down_max << '\n';
	}

    return 0;
}
