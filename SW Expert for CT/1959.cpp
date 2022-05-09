//두 개의 숫자열
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=2&contestProbId=AV5PpoFaAS4DFAUq&categoryId=AV5PpoFaAS4DFAUq&categoryType=CODE&problemTitle=&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=2&pageSize=10&pageIndex=2
#include <iostream>

using namespace std;

int main()
{
    int T,N,M;      //테스트케이스 수, 첫번째 배열 길이, 두번째 배열 길이
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
    }

    return 0;
}