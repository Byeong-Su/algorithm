//[S/W 문제해결 기본] 3일차 - 회문2
//https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV14Rq5aABUCFAYi
//3*3으로 했을때는 맞게 나오는데..
#include <iostream>

using namespace std;

int N=101;
char arr[101][101];

//회문인지 확인
bool palindrome_x(int i, int left, int right){
    while(left<=right){
        if(arr[i][left]!=arr[i][right]){ return false; }
        left++; right--;
    }
    return true;
}
//회문인지 확인
bool palindrome_y(int i, int left, int right){
    while(left<=right){
        if(arr[left][i]!=arr[right][i]){ return false; }
        left++; right--;
    }
    return true;
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int input,max;

    for(int t=1; t<=10; t++){
        //최대길이 초기화
        max=0;

        //입력
        cin >> input;
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                cin >> arr[i][j];
            }
        }

        
        //가로축 탐색
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                for(int k=N-1; k>=0; k--){
                    //지정된 구간 회문 탐색
                    //현재 가장 긴 회문길이보다 구간길이 큰 경우만 탐색
                    if(j<=k && k-j+1>max){
                        //가로축 탐색
                        if(palindrome_x(i,j,k)){ max=k-j+1; }
                        //세로축 탐색
                        if(palindrome_y(i,j,k)){ max=k-j+1; }
                    }
                }
            }
        }
        
        //출력
        cout << '#' << t << ' ' << max << '\n';
    }

    return 0;
}