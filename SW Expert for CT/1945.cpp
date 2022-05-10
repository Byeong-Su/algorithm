//간단한 소인수분해
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=2&contestProbId=AV5Pl0Q6ANQDFAUq&categoryId=AV5Pl0Q6ANQDFAUq&categoryType=CODE&problemTitle=&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=2&pageSize=10&pageIndex=2
#include <iostream>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T,N;      //테스트케이스 수, 숫자 N
    cin >> T;
    //소인수 분해 수
    int num[5]={2,3,5,7,11};
    for(int t=1; t<=T; t++){
        cin >> N;
        int res[5]={0};
        //소인수 분해 결과
        //나눌 수로 나눠 0이 되면 소인수 분해 된것
        //마지막은 나누면 1이 남으므로 while 조건에 의해 종료 됨
        for(int i=0; i<5; i++){
            while( N%num[i]==0 ){
                res[i]++;
                N=N/num[i];
            }
        }

        //출력
        cout << '#' << t << ' ';
        for(int i=0; i<5; i++){
            cout << res[i] << ' ';
        }
        cout << '\n';
    }

    return 0;
}