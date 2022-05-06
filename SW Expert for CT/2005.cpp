//파스칼의 삼각형
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=2&contestProbId=AV5P0-h6Ak4DFAUq&categoryId=AV5P0-h6Ak4DFAUq&categoryType=CODE&problemTitle=&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=2&pageSize=10&pageIndex=1
#include <iostream>

using namespace std;

int main()
{
    int T, N;
    cin >> T;
    for(int t=1; t<=T; t++){
        cin >> N;
        int pascal[N][N]={0};
        cout << '#' << t << '\n';
        for(int i=1; i<=N; i++){
            for(int j=1; j<=i; j++){
                if(j==1 || j==i){
                    pascal[i-1][j-1]=1;
                    cout << pascal[i-1][j-1];
                }
                else{
                    pascal[i-1][j-1]=pascal[i-2][j-2]+pascal[i-2][j-1];
                    cout << pascal[i-1][j-1];
                }
                cout << ' ';
            }
            cout << '\n';
        }
    }

    return 0;
}