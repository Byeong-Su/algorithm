//3032. 홍준이의 숫자 놀이
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AV-0U8FKZLQDFAXT&categoryId=AV-0U8FKZLQDFAXT&categoryType=CODE&problemTitle=&orderBy=INQUERY_COUNT&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=10
//유클리드 호제법
//큰수 % 작은수 = 결과  -> 작은수 % 결과 = 결과_2...
//(= A%B=C -> B%C=D -> C%D=E ... 결과 0 될때까지)
//해서 나머지가 0이됐을 때, 마지막 계산에서 나누는 수가 처음 큰수,작은수의 최대공약수
//확장 유클리드 호제법 문제
#include <iostream>

using namespace std;

void extu(int r1, int r2){
    int r, q, s, s1 = 1, s2 = 0, t, t1 = 0, t2 = 1, tmp = r1;
    
    while(r2){
        q = r1 / r2;
        r = r1 % r2;
        s = s1 - q * s2;
        t = t1 - q * t2;
        
        r1 = r2;
        r2 = r;
        s1 = s2;
        s2 = s;
        t1 = t2;
        t2 = t;
    }
    if(r1 != 1){cout << -1;}
    else{cout << s1 << " " << t1;}
}

int main(void){
    int t;
    cin >> t;
    
    for(int tc = 1; tc <= t; tc++){
        int a, b;
        cin >> a >> b;
        
        cout << "#" << tc << " ";
        extu(a, b);
        cout << endl;
    }
    return 0;
}