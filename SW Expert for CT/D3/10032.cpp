//과자 분배
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AXJZ6_6KCLcDFAU3&categoryId=AXJZ6_6KCLcDFAU3&categoryType=CODE&problemTitle=10032&orderBy=PASS_RATE&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=1
//코드가 어렵다기 보다는 그냥 조금만 생각하면 풀수있는 간단한 수학문제 수준
#include <iostream>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T,N,K;      //테스트케이스 수, 과자수, 사람수
    cin >> T;
    for(int t=1; t<=T; t++){
        //과자수, 사람수 입력
        cin >> N >> K;

        //출력
        cout << '#' << t << ' ';
        //사람수대로 나누어 떨어지면 0
        if(N%K==0){ cout << 0; }
        //사람수대로 나눈 후 나머지 생기면
        //나머지를 하나씩 순차적으로 배분하면 되므로
        //가장 작은 차이는 1
        else{ cout << 1; }
        cout << '\n';
    }

    return 0;
}