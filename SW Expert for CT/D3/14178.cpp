//1차원 정원
//https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AX_N3oSqcyUDFARi
#include <iostream>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;      //테스트케이스 수
    int N,D,range,res;    //정원 길이, 분무기 값, 분무기 범위,결과(분무기 개수)
    cin >> T;
    for(int t=1; t<=T; t++){
        //입력
        cin >> N >> D;

        //분무기 범위 구하기
        range= 2*D + 1;

        //나누어 떨어지면 딱 맞게 있는거
        if(N%range==0){ res=N/range; }
        //아니면 남은구간 위해 +1
        else{ res=N/range + 1; }
        
        //출력
        cout << '#' << t << ' ' << res << '\n';
    }

    return 0;
}