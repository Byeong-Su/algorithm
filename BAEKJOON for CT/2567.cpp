#include<iostream>
using namespace std;
 
int main() {
 
    int board[101][101] = {0,};
    int N;
    int row, col;
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
    int answer = 0;
 
    cin >> N;
    // 색종이 배치
    for (int i = 0; i < N; i++)
    {
        cin >> row >> col;
 
        //색종이 영역 1로 채우기
        for (int r = row; r < row + 10; r++)
            for (int c = col; c < col + 10; c++)
                board[r][c] = 1;
    }
 
    for (int r = 1; r < 101; r++)
        for (int c = 1; c < 101; c++)
        {
            if(board[r][c] == 1)
            {
                for (int i = 0; i < 4; i++)
                {
                    //인접한 영역이 0이면 좌표개수 증가
                    if (board[r + dy[i]][c + dx[i]] == 0)
                        answer++;
                }
            }
        }
 
 
    cout << answer;
 
    return 0;
}

//인접한 영역이 0인 좌표의 갯수