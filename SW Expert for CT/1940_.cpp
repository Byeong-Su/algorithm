//가랏! RC카!
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=2&contestProbId=AV5PjMgaALgDFAUq&categoryId=AV5PjMgaALgDFAUq&categoryType=CODE&problemTitle=&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=2&pageSize=10&pageIndex=3
#include <iostream>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T,N;      //테스트케이스 수, 조작횟수
    int mode, speed, value, dis;  //모드(1.가속, 2.감속, 0. 유지), 속도, 입력값, 이동거리
    cin >> T;
    for(int t=1; t<=T; t++){
        cin >> N;
        //속도, 이동거리 초기화
        speed=0, dis=0;
        for(int i=0; i<N; i++){
            cin >> mode;
            switch (mode)
            {
            //유지
            case 0:
                dis+=speed;
                break;
            //가속
            case 1:
                cin >> value;
                speed+=value;
                dis+=speed;
                break;
            //감속
            case 2:
                cin >> value;
                speed-=value;
                if(speed<0){ speed=0; }
                dis+=speed;
                break;
            
            default:
                break;
            }            
        }
        //출력
        cout << '#' << t << ' ' << dis << '\n';
    }

    return 0;
}