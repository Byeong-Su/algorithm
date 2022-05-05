//더블더블
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=1&contestProbId=AV5QDEX6AqwDFAUq&categoryId=AV5QDEX6AqwDFAUq&categoryType=CODE&problemTitle=&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=1&pageSize=10&pageIndex=2
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    int N,tmp=1;
    cin >> N;
    for(int i=0; i<=N; i++){
        cout << tmp << ' ';
        tmp*=2;
    }
	
	return 0;
}