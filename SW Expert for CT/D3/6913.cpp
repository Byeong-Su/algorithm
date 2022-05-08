//동철이의 프로그래밍 대회
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AWicMVWKTuMDFAUL&categoryId=AWicMVWKTuMDFAUL&categoryType=CODE&problemTitle=&orderBy=PASS_RATE&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=3&&&&&&&&&&
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T, N, M;    //테스트케이스 수, 사람 수, 문제 수
    int max, cnt, sum;
    cin >> T;
    for(int t=1; t<=T; t++){
        //사람수 문제수 입력
        cin >> N >> M;
        //사람수*문제수 배열
        int arr[N][M];
        //각 사람별 점수합계 저장용 벡터
        vector<int> v; v.clear();
        //최대값 초기화
        max=0;
        //사람수*문제수 배열 입력, 최대값 찾기
        for(int i=0; i<N; i++){
            //점수합계용
            sum=0;
            for(int j=0; j<M; j++){
                cin >> arr[i][j];
                sum+=arr[i][j];
            }
            v.push_back(sum);
            //최대값 찾기
            if(max<sum){ max=sum; }
        }
        
        //카운트 초기화
        cnt=0;
        //1등인 사람(최대점수인 사람) 수 카운트
        for(int i=0; i<N; i++){
            if(v[i]==max){ cnt++; }
        }
        //출력
        cout << '#' << t << ' ' << cnt << ' ' << max << '\n';
    }
    return 0;
}