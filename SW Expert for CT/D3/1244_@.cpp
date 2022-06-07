//[S/W 문제해결 응용] 2일차 - 최대 상금
//https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV15Khn6AN0CFAYD&categoryId=AV15Khn6AN0CFAYD&categoryType=CODE&problemTitle=1244&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=&pageSize=10&pageIndex=1
//백트레킹
//stoi = string to int
//stof = string to float
//stol = string to long
//stod = string to double
//!!!npmespace std안에 max있어서 전역변수로 max써주면 애매하다고 나옴
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int ans, change;        //최대값, 탐색 깊이
string s;

void dfs(int index, int current)
{
    //탐색깊이만큼 들어가면 맥스값과 비교
    if(current == change)
    {
        ans = max(ans, stoi(s));
        return;
    }
    for(int i = index; i < s.size() - 1; i++)
    {
        for(int j = i + 1; j < s.size(); j++)
        {
            swap(s[i], s[j]);            
            //@@@백트래킹이 i부터 시작되게 해야함
            dfs(i, current + 1);
            swap(s[i], s[j]);
        }
    }
}

int main(void)
{
    int t;
    cin >> t;
    
    for(int i = 1; i <= t; i++)
    {
        cin >> s >> change;
        ans = 0;

        //문자열보다 길면 쓸모없는 반복교환 하게 됨        
        if(change > s.size()){ change = s.size() - 1; }
        //백트레킹
        dfs(0, 0);
        //출력
        cout << "#" << i << " " << ans << endl;
    }
    return 0;
}