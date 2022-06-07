//2001. 파리 퇴치
//https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5PzOCKAigDFAUq&categoryId=AV5PzOCKAigDFAUq&categoryType=CODE&problemTitle=2001&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=&pageSize=10&pageIndex=1
#include <iostream>

using namespace std;

int main()
{
    int T,N,M;  //테스트케이스 수, 배열 크기, 파리채 크기
    int max,tmp_sum;    //최대 파리 개수,각 부분 합
    cin >> T;
    for(int t=1; t<=T; t++){
        //배열크기, 파리채 크기 입력
        cin >> N >> M;
        
        //배열 입력
        int arr[N][N];
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                cin >> arr[i][j];
            }
        }
        
        max=0;
        for(int i=0; i<=N-M; i++){
            for(int j=0; j<=N-M; j++){
                tmp_sum=0;
                //부분합계
                for(int a=i; a<i+M; a++){
                    for(int b=j; b<j+M; b++){
                        tmp_sum+=arr[a][b];
                    }
                }
                //최대값 최산화
                if(max<tmp_sum){ max=tmp_sum; }
            }
        }
        cout << '#' << t << ' ' << max << '\n';
        
    }

    return 0;
}