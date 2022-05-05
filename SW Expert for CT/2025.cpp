//N줄 덧셈
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=1&contestProbId=AV5QFZtaAscDFAUq&categoryId=AV5QFZtaAscDFAUq&categoryType=CODE&problemTitle=&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=1&pageSize=10&pageIndex=2
#include <iostream>

using namespace std;

int main(){

    int n,sum=0;
    cin >> n;
    for(int i=1; i<=n; i++){
        sum+=i;
    }
    cout << sum;
}