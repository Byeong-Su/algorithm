//아주 간단한 계산기
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=1&contestProbId=AV5PjsYKAMIDFAUq&categoryId=AV5PjsYKAMIDFAUq&categoryType=CODE&problemTitle=&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=1&pageSize=10&pageIndex=2
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    int a,b;        //두 자연수 a,b
    cin >> a >> b;
    cout << a+b << '\n';
    cout << a-b << '\n';
    cout << a*b << '\n';
    cout << a/b << '\n';
	
	return 0;
}