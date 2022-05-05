//간단한 N의 약수
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=1&contestProbId=AV5PhcWaAKIDFAUq&categoryId=AV5PhcWaAKIDFAUq&categoryType=CODE&problemTitle=&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=1&pageSize=10&pageIndex=2
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    int N;
    cin >> N;
    for(int i=1; i<=N; i++){
        if(N%i==0){ cout << i << ' '; }
    }
	
	return 0;
}