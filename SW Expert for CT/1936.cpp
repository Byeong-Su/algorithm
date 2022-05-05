//1대1 가위바위보
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=1&contestProbId=AV5PjKXKALcDFAUq&categoryId=AV5PjKXKALcDFAUq&categoryType=CODE&problemTitle=&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=1&pageSize=10&pageIndex=2
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    int a,b;
    cin >> a >> b;

    //B가 이기는 경우
    if( (a==1&&b==2) || (a==2&&b==3) || (a==3&&b==1)){ cout << 'B'; }
    //A가 이기는 경우
	if( (b==1&&a==2) || (b==2&&a==3) || (b==3&&a==1)){ cout << 'A'; }

	return 0;
}