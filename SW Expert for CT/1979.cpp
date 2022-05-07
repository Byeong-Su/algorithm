//어디에 단어가 들어갈 수 있을까
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=2&contestProbId=AV5PuPq6AaQDFAUq&categoryId=AV5PuPq6AaQDFAUq&categoryType=CODE&problemTitle=&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=2&pageSize=10&pageIndex=1
//!!!Key Point!!!
//단어 공간이 빌 뿐만 아니라 공간 앞뒤가 막혀있어 지정개수 단어가 딱맞게 들어가야함
#include <iostream>

using namespace std;

int main()
{
    int T,N,K;                  //테스트케이스,배열크기, 단어길이
    int dir_x, dir_y;       //탐색 좌표
    bool isEmpty;           //빈공간 여부
    cin >> T;
    int dx[4]={0,1};       //탐색 방향 x(좌측, 아래측만 하면 되므로 방향 2개)
    int dy[4]={1,0};       //탐색 방향 y
    
    for(int t=1; t<=T; t++){
        //배열크기, 단어길이 입력
        cin >> N >> K;
        int puzzle[N][N], cnt=0;        //퍼즐공간, 들어갈수있는 자리 카운트
        
        //퍼즐 공간 입력
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                cin >> puzzle[i][j];
            }
        }
        
        //탐색
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                
                //빈공간 만나면
                if(puzzle[i][j]==1){
                    dir_x=i, dir_y=j, isEmpty=true;
                    
                    //앞이 빈공간이면
                    if( dir_x-dx[0]>-1 && dir_y-dy[0]>-1 && puzzle[dir_x-dx[0]][dir_y-dy[0]]==1 ){ isEmpty=false; }
                    //가로방향 단어 길이만큼 빈자리 연속해 있는지 탐색
                    for(int k=0; k<K; k++){
                        //배열 범위 넘거나 빈 공간이 아니면 false
                        if( (dir_x>=N) || (dir_y>=N) || (puzzle[dir_x][dir_y]==0) ){ isEmpty=false; }
                        dir_x+=dx[0], dir_y+=dy[0];
                    }
                    //끝이 빈공간이면
                    if( dir_x<N && dir_y<N && puzzle[dir_x][dir_y]==1 ){ isEmpty=false; }
                    
                    //크기만큼 비어있으면 카운트 증가, 빈공간 단어로 채우기
                    if(isEmpty){
                        cnt++;
                    }
                    
                    dir_x=i, dir_y=j, isEmpty=true;
                    //앞이 빈공간이면
                    if( dir_x-dx[1]>-1 && dir_y-dy[1]>-1 && puzzle[dir_x-dx[1]][dir_y-dy[1]]==1 ){ isEmpty=false; }
                    //세로방향 단어 길이만큼 빈자리 연속해 있는지 탐색
                    for(int k=0; k<K; k++){
                        //배열 범위 넘거나 빈 공간이 아니면 false
                        if( (dir_x>=N) || (dir_y>=N) || (puzzle[dir_x][dir_y]==0) ){ isEmpty=false; }
                        dir_x+=dx[1], dir_y+=dy[1];
                    }
                    //끝이 빈공간이면
                    if( dir_x<N && dir_y<N && puzzle[dir_x][dir_y]==1 ){ isEmpty=false; }
                    //크기만큼 비어있으면 카운트 증가, 빈공간 단어로 채우기
                    if(isEmpty){
                        //카운트 증가
                        cnt++;
                    }
                }
            }
        }
        cout << '#' << t << ' ' << cnt << '\n';
    }

    return 0;
}