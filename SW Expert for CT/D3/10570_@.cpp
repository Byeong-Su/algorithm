//제곱 팰린드롬 수
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AXO72aaqPrcDFAXS&categoryId=AXO72aaqPrcDFAXS&categoryType=CODE&problemTitle=&orderBy=PASS_RATE&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=2
//쉬운문제인데 실수함
//회문검사 함수에서 백의자리인경우랑 십의자리인 경우
//첫 if조건문 통과후 그 안에 if만 쓰는게 아니라 else도 써줘야 그 경우가 처리되는데
//그거 안써줘서 자꾸 이상한결과값 나오게 됨
#include <iostream>
#include <cmath>

using namespace std;

bool isPalindrome(int num){
    //백의자리인 경우
    if(100<=num && num<1000){
        if( ((num%1000)/100)==(num%10) ){ return true; }
        else{ return false; }
    }
    //십의자리인 경우
    else if(10<=num && num<100){
        if( ((num%100)/10)==(num%10) ){ return true; }
        else{ return false; }
    }
    //일의자리인 경우
    else if(1<=num && num<10){ return true; }
    else {return false; }
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T,A,B;      //테스트케이스 수
    cin >> T;
    for(int t=1; t<=T; t++){
        cin >> A >> B;
        int cnt=0;
        for(int i=A; i<=B; i++){
            if( (sqrt(i)-int(sqrt(i)))==0 ){
                if( isPalindrome(i) && isPalindrome(sqrt(i)) ){ cnt++; }
            }
        }
        //출력
        cout << '#' << t << ' ' << cnt << '\n';
    }

    return 0;
}