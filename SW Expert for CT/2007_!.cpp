//패턴 마디의 길이
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=2&contestProbId=AV5P1kNKAl8DFAUq&categoryId=AV5P1kNKAl8DFAUq&categoryType=CODE&problemTitle=&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=2&pageSize=10&pageIndex=1
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int T;      //테스트케이스 수
    cin >> T;
    
    for(int t = 1; t <= T; t++)
    {
        string str, tmp;
        cin >> str;
        tmp.push_back(str[0]);
        
        for(int i = 1; i < str.length(); i++)
        {
            //substr(pos, cnt); 문자열의 pos번째부터  cnt길이만큼 문자열 리턴
            if(tmp != str.substr(tmp.size(), i)){
                tmp.push_back(str[i]);
            }
            else{ break; }
        }
        cout << "#" << t << " " << tmp.size() << endl;
    }
    return 0;
}