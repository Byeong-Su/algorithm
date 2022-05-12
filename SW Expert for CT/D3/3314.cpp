//보충학습과 평균
//https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWBnA2jaxDsDFAWr
#include <iostream>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T,sum;      //테스트케이스 수, 성적의 합
    int grade[5];   //학생들의 점수
    cin >> T;
    for(int t=1; t<=T; t++){
        sum=0;
        for(int i=0; i<5; i++){
            //성적입력
            cin >> grade[i];
            //40점보다 낮은경우 보충수업 받은걸로 처리
            if(grade[i]<40){ grade[i]=40; }
            //성적 합산
            sum+=grade[i];
        }
        //출력
        cout << '#' << t << ' ' << sum/5 << '\n';
    }

    return 0;
}