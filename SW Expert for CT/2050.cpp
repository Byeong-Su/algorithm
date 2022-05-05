//알파벳을 숫자로 변환
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=1&contestProbId=AV5QLGxKAzQDFAUq&categoryId=AV5QLGxKAzQDFAUq&categoryType=CODE&problemTitle=&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=1&pageSize=10&pageIndex=1
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++){
        //`다음 a, z다음 {, @다음 A,  Z다음 [
        cout << s[i]-'@' << ' ';
    }
	return 0;
}