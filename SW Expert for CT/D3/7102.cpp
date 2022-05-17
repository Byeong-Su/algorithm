//준홍이의 카드놀이
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AWkIlHWqBYcDFAXC&categoryId=AWkIlHWqBYcDFAXC&categoryType=CODE&problemTitle=&orderBy=PASS_RATE&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=4
#include <iostream>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T,N,M,max;      //테스트케이스 수
    cin >> T;
    for(int t=1; t<=T; t++){
        cin >> N >> M;
        int arr[N+M+1]={0};
        max=0;
        for(int i=1; i<=N; i++){
            for(int j=1; j<=M; j++){
                arr[i+j]++;
                if(arr[i+j]>max){ max=arr[i+j]; }
            }
        }

        //출력
        cout << '#' << t;
        for(int i=1; i<=N+M; i++){
            if(arr[i]==max){ cout << ' ' << i; }
        }
        cout << '\n';
    }

    return 0;
}