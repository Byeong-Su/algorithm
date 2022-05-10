//새로운 불면증 치료법
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=2&contestProbId=AV18_yw6I9MCFAZN&categoryId=AV18_yw6I9MCFAZN&categoryType=CODE&problemTitle=&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=2&pageSize=10&pageIndex=3
#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T,N,cnt,idx,next_N;      //테스트케이스 수, 입력 수, 횟수, 인덱스
    string str;
    bool isSatisfied;   //1~9 전부 충족 여부
    cin >> T;
    for(int t=1; t<=T; t++){
        //입력
        cin >> N;
        //1~9 만족여부 저장용 배열
        bool arr[10]={false};
        
        cnt=0, idx=1, next_N=N;
        isSatisfied=false;
        while(!isSatisfied){
            idx++;
            cnt++;
            //입력 수 문자열로
            str = to_string(next_N);
            for(int i=0; i<str.length(); i++){
                arr[int(str[i]-'0')]=true;
            }
            isSatisfied=true;
            for(int i=0; i<10; i++){
                if(arr[i]==false){ isSatisfied=false; }
            }
            next_N=idx*N;
        }
        //출력
        cout << '#' << t << ' ' << next_N-N << '\n';
    }

    return 0;
}