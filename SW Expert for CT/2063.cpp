//중간값 찾기
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=1&contestProbId=AV5QPsXKA2UDFAUq&categoryId=AV5QPsXKA2UDFAUq&categoryType=CODE&problemTitle=&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=1&pageSize=10&pageIndex=1#include <iostream>
#include <iostream>

using namespace std;

int main() {
    int N,sum=0;          //자연수,합계
    //입력
    cin >> N;
    //순서대로 천의자리, 백의자리, 십의자리, 일의자리 합
    sum=(N/1000)+((N%1000)/100)+((N%100)/10)+(N%10);
	//출력
    cout << sum;
    return 0;
}