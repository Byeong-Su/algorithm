//다솔이의 다이아몬드 장식
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AWSNw5jKzwMDFAUr&categoryId=AWSNw5jKzwMDFAUr&categoryType=CODE&problemTitle=&orderBy=PASS_RATE&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=3
//문자열 미리 배열로 저장해서 2중반복문 돌리는게 더 깔끔한 코드일듯
#include <iostream>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;      //테스트케이스 수
    string str;     //문자열
    cin >> T;
    for(int t=1; t<=T; t++){
        cin >> str;
        
        //1번째줄
        cout << "..#..";
        for(int i=1; i<str.length(); i++){
            cout << ".#..";
        }
        cout << '\n';
        //2번째줄
        cout << ".#.#.";
        for(int i=1; i<str.length(); i++){
            cout << "#.#.";
        }
        cout << '\n';
        //3번째줄
        cout << "#." << str[0] << ".#";
        for(int i=1; i<str.length(); i++){
            cout << '.' << str[i] << ".#";
        }
        cout << '\n';
        //4번째줄
        cout << ".#.#.";
        for(int i=1; i<str.length(); i++){
            cout << "#.#.";
        }
        cout << '\n';
        //5번째줄
        cout << "..#..";
        for(int i=1; i<str.length(); i++){
            cout << ".#..";
        }
        cout << '\n';
    }

    return 0;
}