//8104. 조 만들기
//https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWwXCn2KQjEDFATu
#include <iostream>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T,N,K;      //테스트케이스 수
    cin >> T;
    for(int t=1; t<=T; t++){
        cin >> N >> K;

        int idx=1;
        int arr[K]={0};    

        for(int i=0; i<N; i++){
            if(i%2==0){
                for(int j=0; j<K; j++){ arr[j]+=idx; idx++; }
            }else{
                for(int j=K-1; j>=0; j--){ arr[j]+=idx; idx++; }
            }
        }
        
        //출력
        cout << '#' << t;
        for(int i=0; i<K; i++){
            cout << ' ' << arr[i];
        }
        cout << '\n';
    }

    return 0;
}