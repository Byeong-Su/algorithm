//[S/W 문제해결 기본] 1일차 - Flatten
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AV139KOaABgCFAYh&categoryId=AV139KOaABgCFAYh&categoryType=CODE&problemTitle=1208&orderBy=INQUERY_COUNT&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=1
//정렬과 양끝점을 활용하는것 말고
//반복적으로 max, min값 찾아서 교환하는 방법 사용해도 된다
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
    for(int i = 1; i <= 10; i++)
    {
        int t;
        vector<int> v;
        cin >> t;
        
        for(int j = 0; j < 100; j++)
        {
            int tmp;
            cin >> tmp;
            v.push_back(tmp);
        }
        
        for(int j = 0; j < t; j++)
        {
            sort(v.begin(), v.end());
            if(v.back() - v.front() <= 1)
                break;
            v[0]++;
            v[99]--;
        }
        sort(v.begin(), v.end());
        cout << "#" << i << " " << v.back() - v.front() << endl;
    }
    return 0;
}      