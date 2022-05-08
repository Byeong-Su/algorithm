//스도쿠 검증
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=2&contestProbId=AV5Psz16AYEDFAUq&categoryId=AV5Psz16AYEDFAUq&categoryType=CODE&problemTitle=&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=2&pageSize=10&pageIndex=2
//@@@실수 point@@@
//검증배열(verify) 해당되는수 체크시 배열 인덱스 0~9이므로 스도쿠 숫자 1~9 맞춰주려면 -1해줘야함
#include <iostream>

using namespace std;

int main()
{
    int T;              //테스트케이스 수
    int puzzle[9][9];   //스도쿠 퍼즐
    int verify[9];      //검증배열
    bool isVerified;    //검증만족여부
    
    //3*3검증 시작점 배열
    int start_x[9]={0,0,0,3,3,3,6,6,6};
    int start_y[9]={0,3,6,0,3,6,0,3,6};
    //3*3검증 탐색순서 배열
    int dx[9]={0,0,0,1,1,1,2,2,2};
    int dy[9]={0,1,2,0,1,2,0,1,2};
    
    cin >> T;
    for(int t=1; t<=T; t++){
        //스도쿠 입력
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                cin >> puzzle[i][j];
            }
        }
        //스도쿠 만족여부
        isVerified=true;
        //가로선 검증(9번 반복)
        for(int k=0; k<9; k++){
            //검증배열 초기화
            for(int m=0; m<9; m++){ verify[m]={0}; }
            //검증
            //1~9중 해당되는수 배열칸에 1
            for(int m=0; m<9; m++){ verify[puzzle[k][m]-1]=1; }
            //만약 1~9중 없는 수 있었으면 만족여부 false
            for(int m=0; m<9; m++){ if(verify[m]==0){ isVerified=false; } }
        }
        //세로선 검증(9번 반복)
        for(int k=0; k<9; k++){
            //검증배열 초기화
            for(int m=0; m<9; m++){ verify[m]={0}; }
            //검증
            //1~9중 해당되는수 배열칸에 1
            for(int m=0; m<9; m++){ verify[puzzle[m][k]-1]=1; }
            //만약 1~9중 없는 수 있었으면 만족여부 false
            for(int m=0; m<9; m++){ if(verify[m]==0){ isVerified=false; } }
        }
        //3*3칸 검증(9번 반복)
        for(int k=0; k<9; k++){
            //검증배열 초기화
            for(int m=0; m<9; m++){ verify[m]={0}; }
            //검증
            //1~9중 해당되는수 배열칸에 1
            for(int m=0; m<9; m++){ verify[ puzzle[start_x[k]+dx[m]][start_y[k]+dy[m]]-1 ]=1; }
            //만약 1~9중 없는 수 있었으면 만족여부 false
            for(int m=0; m<9; m++){ if(verify[m]==0){ isVerified=false; } }
        }
        if(isVerified){ cout << '#' << t << ' ' << 1 << '\n'; }
        else{ cout << '#' << t << ' ' << 0 << '\n'; }
    }

    return 0;
}