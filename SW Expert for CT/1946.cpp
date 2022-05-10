//간단한 압축 풀기
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=2&contestProbId=AV5PmkDKAOMDFAUq&categoryId=AV5PmkDKAOMDFAUq&categoryType=CODE&problemTitle=&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=2&pageSize=10&pageIndex=2
#include <iostream>
#include <deque>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T,N;      //테스트케이스 수, 알파벳 개수
    cin >> T;
    for(int t=1; t<=T; t++){
        cin >> N;
        //알파벳 배열
        deque<int> alpha_dq;
        char alpha;
        //알파벳별 개수 배열, 문서 길이
        deque<int> cnt_dq;
        int cnt, length=0;
        //알파벳종류, 종류별 개수 입력
        for(int i=0; i<N; i++){
            cin >> alpha >> cnt;
            alpha_dq.push_back(alpha);
            cnt_dq.push_back(cnt);
            length+=cnt;
        }
        //출력
        cout << '#' << t << '\n';
        for(int i=1; i<=length; i++){
            //cnt수가 0이면 deque 젤 앞 삭제(=cnt 만큼 출력했으면 그 알파벳은 끝)
            if( cnt_dq[0]==0 ){ alpha_dq.pop_front(), cnt_dq.pop_front(); }
            cout << char(alpha_dq[0]);

            cnt_dq[0]--;
            //10개 입력후 줄바꿈
            if(i%10==0){ cout << '\n'; }
        }
        cout << '\n';
    }

    return 0;
}