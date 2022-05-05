//대각선 출력하기
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=1&contestProbId=AV5QFuZ6As0DFAUq&categoryId=AV5QFuZ6As0DFAUq&categoryType=CODE&problemTitle=&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=1&pageSize=10&pageIndex=2
#include <iostream>

using namespace std;

int main(){
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            //i,j같을때만 #출력해서 #대각선출력
            if(i==j){ cout << '#'; }
            else { cout << '+'; }
        }
        cout << '\n';
    }

    return 0;
}



