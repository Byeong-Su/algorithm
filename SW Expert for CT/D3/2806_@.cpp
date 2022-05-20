//N-Queen
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AV7GKs06AU0DFAXB&categoryId=AV7GKs06AU0DFAXB&categoryType=CODE&problemTitle=&orderBy=PASS_RATE&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=7
#include <iostream>

using namespace std;

int board[10];      //board[0]=1이면 (1,2) 또는 (2,1)에 퀸 존재
int cnt,N;

void queen_BT(int queen){
    bool flag=true;
    if(queen==N){ cnt++; return; }
    for(int i=0; i<N; i++){
        flag=true;
        for(int j=0; j<queen; j++){
            //같은줄 || 같은 대각선에 있는 경우
            if(board[j]==i || abs(queen-j)==abs(i-board[j])){
                flag=false;
                break;
            }
        }
        if(flag){
            board[queen]=i;
            queen_BT(queen+1);
        }
    }
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;      //테스트케이스 수
    cin >> T;
    for(int t=1; t<=T; t++){
        cin >> N;
        //초기화
        cnt=0;

        queen_BT(0);
        
        //출력
        cout << '#' << t << ' ' << cnt << '\n';
    }

    return 0;
}