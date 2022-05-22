//두 전구
//https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AXuUo_Tqs9kDFARa
//2~4초 사이에 켜져 있었으면 2초간 켜져있는 것임
#include <iostream>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T,A,B,C,D;      //테스트케이스 수
    cin >> T;
    for(int t=1; t<=T; t++){
        cin >> A >> B >> C >> D;

        int cnt=0;
        int arr[101]={0};

        for(int i=A; i<=B; i++){
            arr[i]+=1;
        }
        for(int i=C; i<=D; i++){
            arr[i]+=2;
        }

        for(int i=0; i<101; i++){
            if(arr[i]==3){ cnt++; }
        }
        
        //출력
        cout << '#' << t << ' ';
        if(cnt==0){ cout << 0 << '\n'; }
        else{ cout << cnt-1 << '\n'; }
    }

    return 0;
}