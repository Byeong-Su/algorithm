//지그재그 숫자
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=2&contestProbId=AV5PxmBqAe8DFAUq&categoryId=AV5PxmBqAe8DFAUq&categoryType=CODE&problemTitle=&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=2&pageSize=10&pageIndex=1
#include <iostream>

using namespace std;

int main()
{
    int T,N,sum;
    cin >> T;
    //홀짝여부
    bool isOdd;
    
    for(int t=1; t<=T; t++){
        sum=0;
        isOdd=true;
        cin >> N;
        for(int i=1; i<=N; i++){
            //홀수
            if(isOdd){ sum+=i; }
            //짝수
            else { sum-=i; }
            isOdd=!isOdd;
        }
        cout << '#' << t << ' ' << sum << '\n';
    }

    return 0;
}
