//거꾸로 출력해 보아요
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=1&contestProbId=AV2gbY0qAAQBBAS0&categoryId=AV2gbY0qAAQBBAS0&categoryType=CODE&problemTitle=&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=1&pageSize=10&pageIndex=2
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    int N;
    cin >> N;
    for(int i=N; i>=0; i--){
        cout << i << ' ';
    }
}