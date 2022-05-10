//두 개의 숫자열
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=2&contestProbId=AV5PpoFaAS4DFAUq&categoryId=AV5PpoFaAS4DFAUq&categoryType=CODE&problemTitle=&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=2&pageSize=10&pageIndex=2
#include <iostream>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T,N,M;      //테스트케이스 수, 첫번째 배열 길이, 두번째 배열 길이
    int max,sum;
    cin >> T;
    for(int t=1; t<=T; t++){
        cin >> N >> M;
        int A[N], B[M];
        //A배열 입력
        for(int i=0; i<N; i++){
            cin >> A[i];
        }
        //B배열 입력
        for(int i=0; i<M; i++){
            cin >> B[i];
        }

        //최대값 초기화
        max=0;
        //M>=N인 경우
        if(M>=N){
            //두 배열의 곱 중 최대값 찾기
            //작은 배열이 큰 배열 마지막 인덱스 안이여야 하므로 M-N까지
            for(int i=0; i<=M-N; i++){
                sum=0;
                for(int j=0; j<N; j++){
                    //큰 배열은 인덱스를 하나씩 올려줘야 하므로 i+j
                    sum+=(A[j]*B[i+j]);
                }
                //최대값 찾기
                if(sum>max){ max=sum; }
            }
            //출력
            cout << '#' << t << ' ' << max << '\n';
        }
        //M<N인 경우
        else{
            //두 배열의 곱 중 최대값 찾기
            //작은 배열이 큰 배열 마지막 인덱스 안이여야 하므로 M-N까지
            for(int i=0; i<=N-M; i++){
                sum=0;
                for(int j=0; j<M; j++){
                    //큰 배열은 인덱스를 하나씩 올려줘야 하므로 i+j
                    sum+=(A[i+j]*B[j]);
                }
                //최대값 찾기
                if(sum>max){ max=sum; }
            }
            //출력
            cout << '#' << t << ' ' << max << '\n';
        }
    }

    return 0;
}