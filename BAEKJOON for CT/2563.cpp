//백준 2563
#include <iostream>

using namespace std;

bool arr[101][101];

int main()
{
    int t,a,b,size=0;
    cin >> t;
    
    //검은종이 영역 true로
    for(int i=0; i<t; i++){
        cin >> a >> b;
        for(int j=a; j<a+10; j++){
            for(int k=b; k<b+10; k++){
                arr[j][k]=true;
            }
        }
    }
    
    //true인 영역 갯수 카운트
    for(int i=1; i<101; i++){
        for(int j=1; j<101; j++){
            if(arr[i][j]){ size++; }
        }
    }
    
    cout << size;
    
    return 0;
}
