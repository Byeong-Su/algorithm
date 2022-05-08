//https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWQmA4uK8ygDFAXj
#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T,N,M,cnt_B, cnt_W;  //테스트 케이스 수, 보드 길이, 돌의 개수, 흑돌개수, 백돌개수
    vector<int> vec_x, vec_y, res_vec;    //바꿀 좌표 저장 벡터, 결과 저장 벡터
    cin >> T >> N >> M;

    int board[8][8]={0};
    //초기 돌 설정
    board[N/2-1][N/2-1]=1, board[N/2-1][N/2]=2, board[N/2][N/2-1]=2, board[N/2][N/2]=1;
    int stone, x, y, dx, dy;    //돌(1:흑, 2:백), 좌표, 탐색 좌표
    int dir_x[8]={-1,-1,-1,0,1,1,1,0}, dir_y[8]={-1,0,1,1,1,0,-1,-1};

    for(int t=0; t<T; t++){
        for(int i=0; i<M; i++){
            cin >> x >> y >> stone;
            //(N,N)보드 공간에 맞춰주기 위해 -1
            x-=1, y-=1;
            board[x][y]=stone;
            //놓는 돌 흑돌인 경우
            if(stone==1){
                for(int j=0; j<8; j++){
                    //탐색 노드 계산
                    dx=x+dir_x[j], dy=y+dir_y[j];
                    //보드 범위 벗어나지 않고 탐색 좌표가 백돌이면
                    if( (dx>-1&&dx<N) && (dy>-1&&dy<N) && board[dx][dy]==2 ){
                        vec_x.clear(), vec_y.clear();
                        //흑돌 만날때 까지
                        while(board[dx][dy]!=1){
                            //흑돌로 끝나지 않으면 저장좌표 지우고 종료
                            if(board[dx][dy]==0 || (dx<0||dx>=N) || (dx<0||dy>=N)){
                                vec_x.clear(), vec_y.clear();
                                break;
                            }
                            //바꿀 좌표 저장
                            vec_x.push_back(dx);
                            vec_y.push_back(dy);
                            //그 다음 탐색 좌표로
                            dx+=dir_x[j], dy+=dir_y[j];
                        }
                        //저장된 좌표 돌 바꾸기
                        while(!vec_x.empty()){
                            board[vec_x.back()][vec_y.back()]=1;
                            vec_x.pop_back();
                            vec_y.pop_back();
                        }
                    }
                }
            } 
            //놓는 돌 백돌인 경우
            else if(stone==2){
                for(int j=0; j<8; j++){
                    //탐색 노드 계산
                    dx=x+dir_x[j], dy=y+dir_y[j];
                    //보드 범위 벗어나지 않고 탐색 좌표가 흑돌이면
                    if( (dx>-1&&dx<N) && (dy>-1&&dy<N) && board[dx][dy]==1 ){
                        vec_x.clear(), vec_y.clear();
                        //백돌 만날때 까지
                        while(board[dx][dy]!=2){
                            //백돌로 끝나지 않으면 저장좌표 지우고 종료
                            if(board[dx][dy]==0 || (dx<0||dx>=N) || (dx<0||dy>=N)){
                                vec_x.clear(), vec_y.clear();
                                break;
                            }
                            //바꿀 좌표 저장
                            vec_x.push_back(dx);
                            vec_y.push_back(dy);
                            //그 다음 탐색 좌표로
                            dx+=dir_x[j], dy+=dir_y[j];
                        }
                        //저장된 좌표 돌 바꾸기
                        while(!vec_x.empty()){
                            board[vec_x.back()][vec_y.back()]=2;
                            vec_x.pop_back();
                            vec_y.pop_back();
                        }
                    }
                }
            }
        }
        //개수 카운트
        cnt_B=0, cnt_W=0;
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                if(board[i][j]==1){ cnt_B++; }
                else if(board[i][j]==2){ cnt_W++; }
            }
        }
        res_vec.push_back(t);
        res_vec.push_back(cnt_B);
        res_vec.push_back(cnt_W);
    }

    for(int i=0; i<res_vec.size()/3; i+=3){
        cout << "#" << res_vec[i]+1 << ' ' << res_vec[i+1] << ' ' << res_vec[i+2] << '\n';
    }

    return 0;
}