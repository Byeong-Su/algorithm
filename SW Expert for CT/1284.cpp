//수도요금경쟁
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=2&contestProbId=AV189xUaI8UCFAZN&categoryId=AV189xUaI8UCFAZN&categoryType=CODE&problemTitle=&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=2&pageSize=10&pageIndex=3
#include <iostream>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;      //테스트케이스 수
    int P,Q,R,S,liter;    //A사 리터당 요금, B사 R리터 이하요금, R초과점, B사 초과시 리터당 요금, 사용량
    int A_fee, B_fee, fee;
    cin >> T;
    for(int t=1; t<=T; t++){
        //입력
        cin >> P >> Q >> R >> S >> liter;
        //A사 요금구하기
        A_fee=P*liter;
        //B사 요금구하기
        if(liter<=R){ B_fee=Q; }
        else{ B_fee=(Q+(liter-R)*S); }
        //둘 중 작은 요금구하기
        if(A_fee<=B_fee){ fee=A_fee; }
        else{ fee=B_fee; }
        //출력
        cout << '#' << t << ' ' << fee << '\n';
    }

    return 0;
}