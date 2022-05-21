//정사각형 판정
//https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AX8BAN1qTwoDFARO&categoryId=AX8BAN1qTwoDFARO&categoryType=CODE&problemTitle=13732&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=&pageSize=10&pageIndex=1
//@@@정사각형 이므로 가로세로 길이 다르면 정사각형 아니므로 이거도 확인해줘야함
#include <iostream>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T,N;      //테스트케이스 수
    string str;
    cin >> T;
    for(int t=1; t<=T; t++){
        
        int s_x=0, s_y=0, e_x=0, e_y=0;
        //입력
        cin >> N;
        char board[N][N];
        for(int i=0; i<N; i++){
            cin >> str;
            for(int j=0; j<N; j++){
                board[i][j]=str[j];
            }
        }

        //확인
        //#시작좌표 찾기
        bool stop=false;
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                if(board[i][j]=='#'){ s_x=i; s_y=j; stop=true; break; }
            }
            if(stop){ break; }
        }
        //#끝좌표 찾기
        stop=false;
        for(int i=N-1; i>-1; i--){
            for(int j=N-1; j>-1; j--){
                if(board[i][j]=='#'){ e_x=i; e_y=j; stop=true; break; }
            }
            if(stop){ break; }
        }
        
        //시작좌표, 끝좌표 사이가 다 #인지 확인
        bool isSharp=true;
        stop=false;
        for(int i=s_x; i<=e_x; i++){
            for(int j=s_y; j<=e_y; j++){
                if(board[i][j]!='#'){ isSharp=false; stop=true; break; }
            }
            if(stop){ break; }
        }

        //출력
        cout << '#' << t << ' ';
        //가로세로 길이 다르면 정사각형 아니므로 이거도 확인해줘야함
        if( !isSharp || (e_x-s_x != e_y-s_y) ){ cout << "no"; }
        else{ cout << "yes"; }
        cout << '\n';
    }

    return 0;
}