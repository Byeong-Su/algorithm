#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int w, h, n, res=0;
    
    cin >> w >> h >> n;
    
    int x,y,arr[n+1];
    
    for(int i=0; i<=n; i++){
        cin >> x >> y;
        //직사각형의 외곽에만 있으므로
        //왼쪽위를 0으로 두고
        //북, 동, 남, 서 순으로 일열로 붙여서 각 점의 위치 나타낸다.
        switch(x){
            //북
            case 1: arr[i]=y;
            break;
            //남
            case 2: arr[i]=2*w+h-y;
            break;
            //서
            case 3: arr[i]=2*(w+h)-y;
            break;
            //동
            case 4: arr[i]=w+y;
            break;
        }
    }
    for(int i=0; i<n; i++){
        int tmp=abs(arr[i]-arr[n]);
        //상점과 동근이의 거리 2개(시계방향과 반시계방향)중 짧은것 선택
        res+=(tmp<(w+h))? tmp:2*(w+h)-tmp;
    }
    cout << res;
    
    return 0;
}