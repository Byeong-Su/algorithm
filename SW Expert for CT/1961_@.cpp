//숫자배열 회전
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=2&contestProbId=AV5Pq-OKAVYDFAUq&categoryId=AV5Pq-OKAVYDFAUq&categoryType=CODE&problemTitle=&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=2&pageSize=10&pageIndex=2
//손으로 일일이 써서 규칙 찾음
#include <iostream>

using namespace std;

int main()
{
    int T,N;
    cin >> T;
    for(int t=1; t<=T; t++){
        cin >> N;
        int arr[N][N];
        //초기 배열 입력
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                cin >> arr[i][j];
            }
        }
        //출력
        cout << '#' << t << '\n';
        for(int j=0; j<N; j++){
            //90도 출력
            for(int k=0; k<N; k++){
                cout << arr[N-1-k][j];
            }
            cout << ' ';
            //180도 출력
            for(int k=0; k<N; k++){
                cout << arr[N-1-j][N-1-k];
            }
            cout << ' ';
            //270도 출력
            for(int k=0; k<N; k++){
                cout << arr[k][N-1-j];
            }
            cout << '\n';
        }
    }

    return 0;
}