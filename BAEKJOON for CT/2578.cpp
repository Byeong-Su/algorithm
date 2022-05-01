#include <iostream>
#include <queue>

#define HORIZONTAL 0
#define VERTICAL 1
#define DIAGONAL 2

using namespace std;

struct pos{
    int r;
    int c;
};

pos num[26];    //숫자가 적힌 위치
int cnt[3][5];  // 0 가로선, 1 세로선 2 대각선

int main()
{
    int n,turn=0, line=0;
    queue<int> q;
    
    //각 숫자가 적힌 위치를 저장
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin >> n;
            num[n].r = i;
            num[n].c = j;
        }
    }
    
    //사회자가 부르는 수 큐에 저장
    for(int i=0; i<25; i++){
        cin >> n;
        q.push(n);
    }
    
    //빙고를 외치기 전까지 숫자를 순서대로 지우고 선을 그음
    while(!q.empty() && line<3){
        turn++;
        n=q.front();
        q.pop();
        
        //가로선에서 삭제
        cnt[HORIZONTAL][num[n].r]++;
        if(cnt[HORIZONTAL][num[n].r]==5){ line++; }
        
        //세로선에서 삭제
        cnt[VERTICAL][num[n].c]++;
        if(cnt[VERTICAL][num[n].c]==5){ line++; }
        
        //대각선에서 삭제 1
        if(num[n].r == num[n].c){
            cnt[DIAGONAL][0]++;
            if(cnt[DIAGONAL][0]==5){ line++; }
        }
        //대각선에서 삭제 2
        if(num[n].r + num[n].c == 4){
            cnt[DIAGONAL][1]++;
            if(cnt[DIAGONAL][1]==5){ line++; }
        }
    }
    
    cout << turn;
    
    return 0;
}

//빙고 결과 행렬을 압축해서 이용
//ex) 세로행 빙고인지 검사하려면 5개를 하나로 압축해서 해당한칸의 값이 5인지 보면 됨
