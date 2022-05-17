//Calkin-Wilf tree 1
//https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AXgZSOn6ApIDFASW&categoryId=AXgZSOn6ApIDFASW&categoryType=CODE&problemTitle=11688&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=&pageSize=10&pageIndex=1
#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;      //테스트케이스 수
    int a, b;   //분자, 분모
    string s;   //입력 문자열
    cin >> T;
    for (int t = 1; t <= T; t++) {
        a = 1, b = 1;
        
        cin >> s;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'L') { b = a + b;  }
            else { a = a + b; }
        }

        //출력
        cout << '#' << t << ' ' << a << ' ' << b << '\n';
    }

    return 0;
}